# CMake generated Testfile for 
# Source directory: /home/jrabus/Documents/c/rules-c/src
# Build directory: /home/jrabus/Documents/c/rules-c/build/src
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test-add-output[valgrind] "/usr/bin/valgrind" "--leak-check=full" "--quiet" "--error-exitcode=1" "./test-add-output")
set_tests_properties(test-add-output[valgrind] PROPERTIES  _BACKTRACE_TRIPLES "/home/jrabus/Documents/c/rules-c/src/CMakeLists.txt;70;add_test;/home/jrabus/Documents/c/rules-c/src/CMakeLists.txt;0;")
add_test(test-add-output[normal] "./test-add-output")
set_tests_properties(test-add-output[normal] PROPERTIES  _BACKTRACE_TRIPLES "/home/jrabus/Documents/c/rules-c/src/CMakeLists.txt;72;add_test;/home/jrabus/Documents/c/rules-c/src/CMakeLists.txt;0;")
add_test(test-file-exist[valgrind] "/usr/bin/valgrind" "--leak-check=full" "--quiet" "--error-exitcode=1" "./test-file-exist")
set_tests_properties(test-file-exist[valgrind] PROPERTIES  _BACKTRACE_TRIPLES "/home/jrabus/Documents/c/rules-c/src/CMakeLists.txt;70;add_test;/home/jrabus/Documents/c/rules-c/src/CMakeLists.txt;0;")
add_test(test-file-exist[normal] "./test-file-exist")
set_tests_properties(test-file-exist[normal] PROPERTIES  _BACKTRACE_TRIPLES "/home/jrabus/Documents/c/rules-c/src/CMakeLists.txt;72;add_test;/home/jrabus/Documents/c/rules-c/src/CMakeLists.txt;0;")
add_test(test-fill-facts[valgrind] "/usr/bin/valgrind" "--leak-check=full" "--quiet" "--error-exitcode=1" "./test-fill-facts")
set_tests_properties(test-fill-facts[valgrind] PROPERTIES  _BACKTRACE_TRIPLES "/home/jrabus/Documents/c/rules-c/src/CMakeLists.txt;70;add_test;/home/jrabus/Documents/c/rules-c/src/CMakeLists.txt;0;")
add_test(test-fill-facts[normal] "./test-fill-facts")
set_tests_properties(test-fill-facts[normal] PROPERTIES  _BACKTRACE_TRIPLES "/home/jrabus/Documents/c/rules-c/src/CMakeLists.txt;72;add_test;/home/jrabus/Documents/c/rules-c/src/CMakeLists.txt;0;")
add_test(test-fill-output[valgrind] "/usr/bin/valgrind" "--leak-check=full" "--quiet" "--error-exitcode=1" "./test-fill-output")
set_tests_properties(test-fill-output[valgrind] PROPERTIES  _BACKTRACE_TRIPLES "/home/jrabus/Documents/c/rules-c/src/CMakeLists.txt;70;add_test;/home/jrabus/Documents/c/rules-c/src/CMakeLists.txt;0;")
add_test(test-fill-output[normal] "./test-fill-output")
set_tests_properties(test-fill-output[normal] PROPERTIES  _BACKTRACE_TRIPLES "/home/jrabus/Documents/c/rules-c/src/CMakeLists.txt;72;add_test;/home/jrabus/Documents/c/rules-c/src/CMakeLists.txt;0;")
add_test(test-fill-rules[valgrind] "/usr/bin/valgrind" "--leak-check=full" "--quiet" "--error-exitcode=1" "./test-fill-rules")
set_tests_properties(test-fill-rules[valgrind] PROPERTIES  _BACKTRACE_TRIPLES "/home/jrabus/Documents/c/rules-c/src/CMakeLists.txt;70;add_test;/home/jrabus/Documents/c/rules-c/src/CMakeLists.txt;0;")
add_test(test-fill-rules[normal] "./test-fill-rules")
set_tests_properties(test-fill-rules[normal] PROPERTIES  _BACKTRACE_TRIPLES "/home/jrabus/Documents/c/rules-c/src/CMakeLists.txt;72;add_test;/home/jrabus/Documents/c/rules-c/src/CMakeLists.txt;0;")
add_test(test-find-facts[valgrind] "/usr/bin/valgrind" "--leak-check=full" "--quiet" "--error-exitcode=1" "./test-find-facts")
set_tests_properties(test-find-facts[valgrind] PROPERTIES  _BACKTRACE_TRIPLES "/home/jrabus/Documents/c/rules-c/src/CMakeLists.txt;70;add_test;/home/jrabus/Documents/c/rules-c/src/CMakeLists.txt;0;")
add_test(test-find-facts[normal] "./test-find-facts")
set_tests_properties(test-find-facts[normal] PROPERTIES  _BACKTRACE_TRIPLES "/home/jrabus/Documents/c/rules-c/src/CMakeLists.txt;72;add_test;/home/jrabus/Documents/c/rules-c/src/CMakeLists.txt;0;")
add_test(test-initialize-facts[valgrind] "/usr/bin/valgrind" "--leak-check=full" "--quiet" "--error-exitcode=1" "./test-initialize-facts")
set_tests_properties(test-initialize-facts[valgrind] PROPERTIES  _BACKTRACE_TRIPLES "/home/jrabus/Documents/c/rules-c/src/CMakeLists.txt;70;add_test;/home/jrabus/Documents/c/rules-c/src/CMakeLists.txt;0;")
add_test(test-initialize-facts[normal] "./test-initialize-facts")
set_tests_properties(test-initialize-facts[normal] PROPERTIES  _BACKTRACE_TRIPLES "/home/jrabus/Documents/c/rules-c/src/CMakeLists.txt;72;add_test;/home/jrabus/Documents/c/rules-c/src/CMakeLists.txt;0;")
add_test(test-initialize-output[valgrind] "/usr/bin/valgrind" "--leak-check=full" "--quiet" "--error-exitcode=1" "./test-initialize-output")
set_tests_properties(test-initialize-output[valgrind] PROPERTIES  _BACKTRACE_TRIPLES "/home/jrabus/Documents/c/rules-c/src/CMakeLists.txt;70;add_test;/home/jrabus/Documents/c/rules-c/src/CMakeLists.txt;0;")
add_test(test-initialize-output[normal] "./test-initialize-output")
set_tests_properties(test-initialize-output[normal] PROPERTIES  _BACKTRACE_TRIPLES "/home/jrabus/Documents/c/rules-c/src/CMakeLists.txt;72;add_test;/home/jrabus/Documents/c/rules-c/src/CMakeLists.txt;0;")
add_test(test-initialize-rules[valgrind] "/usr/bin/valgrind" "--leak-check=full" "--quiet" "--error-exitcode=1" "./test-initialize-rules")
set_tests_properties(test-initialize-rules[valgrind] PROPERTIES  _BACKTRACE_TRIPLES "/home/jrabus/Documents/c/rules-c/src/CMakeLists.txt;70;add_test;/home/jrabus/Documents/c/rules-c/src/CMakeLists.txt;0;")
add_test(test-initialize-rules[normal] "./test-initialize-rules")
set_tests_properties(test-initialize-rules[normal] PROPERTIES  _BACKTRACE_TRIPLES "/home/jrabus/Documents/c/rules-c/src/CMakeLists.txt;72;add_test;/home/jrabus/Documents/c/rules-c/src/CMakeLists.txt;0;")
add_test(test-output-fwrite[valgrind] "/usr/bin/valgrind" "--leak-check=full" "--quiet" "--error-exitcode=1" "./test-output-fwrite")
set_tests_properties(test-output-fwrite[valgrind] PROPERTIES  _BACKTRACE_TRIPLES "/home/jrabus/Documents/c/rules-c/src/CMakeLists.txt;70;add_test;/home/jrabus/Documents/c/rules-c/src/CMakeLists.txt;0;")
add_test(test-output-fwrite[normal] "./test-output-fwrite")
set_tests_properties(test-output-fwrite[normal] PROPERTIES  _BACKTRACE_TRIPLES "/home/jrabus/Documents/c/rules-c/src/CMakeLists.txt;72;add_test;/home/jrabus/Documents/c/rules-c/src/CMakeLists.txt;0;")
add_test(test-size-tab-file[valgrind] "/usr/bin/valgrind" "--leak-check=full" "--quiet" "--error-exitcode=1" "./test-size-tab-file")
set_tests_properties(test-size-tab-file[valgrind] PROPERTIES  _BACKTRACE_TRIPLES "/home/jrabus/Documents/c/rules-c/src/CMakeLists.txt;70;add_test;/home/jrabus/Documents/c/rules-c/src/CMakeLists.txt;0;")
add_test(test-size-tab-file[normal] "./test-size-tab-file")
set_tests_properties(test-size-tab-file[normal] PROPERTIES  _BACKTRACE_TRIPLES "/home/jrabus/Documents/c/rules-c/src/CMakeLists.txt;72;add_test;/home/jrabus/Documents/c/rules-c/src/CMakeLists.txt;0;")
