# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jrabus/Documents/c/rules-c

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jrabus/Documents/c/rules-c/build

# Include any dependencies generated for this target.
include src/CMakeFiles/test-find-facts.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/test-find-facts.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/test-find-facts.dir/flags.make

src/CMakeFiles/test-find-facts.dir/test-find-facts.c.o: src/CMakeFiles/test-find-facts.dir/flags.make
src/CMakeFiles/test-find-facts.dir/test-find-facts.c.o: ../src/test-find-facts.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jrabus/Documents/c/rules-c/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/CMakeFiles/test-find-facts.dir/test-find-facts.c.o"
	cd /home/jrabus/Documents/c/rules-c/build/src && $(CMAKE_COMMAND) -E __run_co_compile --cppcheck=/usr/bin/cppcheck --source=/home/jrabus/Documents/c/rules-c/src/test-find-facts.c -- /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/test-find-facts.dir/test-find-facts.c.o   -c /home/jrabus/Documents/c/rules-c/src/test-find-facts.c

src/CMakeFiles/test-find-facts.dir/test-find-facts.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test-find-facts.dir/test-find-facts.c.i"
	cd /home/jrabus/Documents/c/rules-c/build/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jrabus/Documents/c/rules-c/src/test-find-facts.c > CMakeFiles/test-find-facts.dir/test-find-facts.c.i

src/CMakeFiles/test-find-facts.dir/test-find-facts.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test-find-facts.dir/test-find-facts.c.s"
	cd /home/jrabus/Documents/c/rules-c/build/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jrabus/Documents/c/rules-c/src/test-find-facts.c -o CMakeFiles/test-find-facts.dir/test-find-facts.c.s

# Object files for target test-find-facts
test__find__facts_OBJECTS = \
"CMakeFiles/test-find-facts.dir/test-find-facts.c.o"

# External object files for target test-find-facts
test__find__facts_EXTERNAL_OBJECTS =

src/test-find-facts: src/CMakeFiles/test-find-facts.dir/test-find-facts.c.o
src/test-find-facts: src/CMakeFiles/test-find-facts.dir/build.make
src/test-find-facts: src/librules.so
src/test-find-facts: src/CMakeFiles/test-find-facts.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jrabus/Documents/c/rules-c/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable test-find-facts"
	cd /home/jrabus/Documents/c/rules-c/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test-find-facts.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/test-find-facts.dir/build: src/test-find-facts

.PHONY : src/CMakeFiles/test-find-facts.dir/build

src/CMakeFiles/test-find-facts.dir/clean:
	cd /home/jrabus/Documents/c/rules-c/build/src && $(CMAKE_COMMAND) -P CMakeFiles/test-find-facts.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/test-find-facts.dir/clean

src/CMakeFiles/test-find-facts.dir/depend:
	cd /home/jrabus/Documents/c/rules-c/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jrabus/Documents/c/rules-c /home/jrabus/Documents/c/rules-c/src /home/jrabus/Documents/c/rules-c/build /home/jrabus/Documents/c/rules-c/build/src /home/jrabus/Documents/c/rules-c/build/src/CMakeFiles/test-find-facts.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/test-find-facts.dir/depend

