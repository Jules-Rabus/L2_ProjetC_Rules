cmake_minimum_required(VERSION 3.0)

project(Rules C)

add_executable(exec rules.c rules.h)
add_library(rules SHARED rules.c rules.h tab-tab.inc tab.inc)

install(
  TARGETS rules
  LIBRARY DESTINATION lib/${CMAKE_BUILD_TYPE}
  ARCHIVE DESTINATION lib/${CMAKE_BUILD_TYPE}
  RUNTIME DESTINATION bin/${CMAKE_BUILD_TYPE}
)

install(
  FILES rules.h
  DESTINATION include
)

# Adding a pkgconfig type configuration file.
# See https://fr.wikipedia.org/wiki/Pkg-config and
# https://cmake.org/cmake/help/latest/command/configure_file.html
configure_file(
  ${CMAKE_CURRENT_SOURCE_DIR}/rules.pc.in
  ${CMAKE_CURRENT_BINARY_DIR}/rules.pc
  @ONLY
)
install(
  FILES ${CMAKE_CURRENT_BINARY_DIR}/rules.pc
  DESTINATION share/pkgconfig/${CMAKE_BUILD_TYPE}
  COMPONENT "PkgConfig"
)

# Adding a cmake type configuration file.
# See https://cmake.org/cmake/help/latest/module/CMakePackageConfigHelpers.html
include(CMakePackageConfigHelpers)
configure_package_config_file(
  ${CMAKE_CURRENT_SOURCE_DIR}/RulesConfig.cmake.in
  ${CMAKE_CURRENT_BINARY_DIR}/RulesConfig.cmake
  INSTALL_DESTINATION cmake
)
install(
  FILES ${CMAKE_CURRENT_BINARY_DIR}/RulesConfig.cmake
  DESTINATION cmake
)

enable_testing()

find_program(VALGRIND "valgrind")

# Recovery in the FILES variable of the test files.
file(GLOB FILES "${CMAKE_CURRENT_SOURCE_DIR}/test-*.c")

# For all test files :
foreach(FILENAME ${FILES})
  # Retrieval from the SRC variable of the name without the folder prefix.
  get_filename_component(SRC ${FILENAME} NAME)
  # Retrieving the name from the TEST variable without the folder prefix.
  #  and without the suffix.
  get_filename_component(TEST ${FILENAME} NAME_WE)
  # Adding an executable also dependent on "rules.h".
  add_executable(${TEST} ${SRC} rules.h)
  # Precision of the construction order: the test program must be carried out.
  #  after the library.
  add_dependencies(${TEST} rules)
  # Assembling the test program with the rules library.
  target_link_libraries(${TEST} rules)
  if(VALGRIND)
    # Adding a test using valgrind.
    add_test("${TEST}[valgrind]" ${VALGRIND} --leak-check=full --quiet --error-exitcode=1 ./${TEST})
    # Adding a normal test.
    add_test("${TEST}[normal]" ./${TEST})
  else()
    # Adding a normal test.
    add_test("${TEST}" ./${TEST})
  endif()
endforeach()

set(CPACK_SOURCE_GENERATOR "ZIP")
set(CPACK_SOURCE_IGNORE_FILES "~$;${CPACK_SOURCE_IGNORE_FILES}")
include(CPack)


find_package(Coverage)
enable_coverage()

find_package(HtmlCoverage)
enable_html_coverage()

find_package(CcLint)
enable_cclint()