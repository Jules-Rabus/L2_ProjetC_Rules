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
include src/CMakeFiles/test-fill-output.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/test-fill-output.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/test-fill-output.dir/flags.make

src/CMakeFiles/test-fill-output.dir/test-fill-output.c.o: src/CMakeFiles/test-fill-output.dir/flags.make
src/CMakeFiles/test-fill-output.dir/test-fill-output.c.o: ../src/test-fill-output.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jrabus/Documents/c/rules-c/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/CMakeFiles/test-fill-output.dir/test-fill-output.c.o"
	cd /home/jrabus/Documents/c/rules-c/build/src && $(CMAKE_COMMAND) -E __run_co_compile --cppcheck=/usr/bin/cppcheck --source=/home/jrabus/Documents/c/rules-c/src/test-fill-output.c -- /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/test-fill-output.dir/test-fill-output.c.o   -c /home/jrabus/Documents/c/rules-c/src/test-fill-output.c

src/CMakeFiles/test-fill-output.dir/test-fill-output.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test-fill-output.dir/test-fill-output.c.i"
	cd /home/jrabus/Documents/c/rules-c/build/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jrabus/Documents/c/rules-c/src/test-fill-output.c > CMakeFiles/test-fill-output.dir/test-fill-output.c.i

src/CMakeFiles/test-fill-output.dir/test-fill-output.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test-fill-output.dir/test-fill-output.c.s"
	cd /home/jrabus/Documents/c/rules-c/build/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jrabus/Documents/c/rules-c/src/test-fill-output.c -o CMakeFiles/test-fill-output.dir/test-fill-output.c.s

# Object files for target test-fill-output
test__fill__output_OBJECTS = \
"CMakeFiles/test-fill-output.dir/test-fill-output.c.o"

# External object files for target test-fill-output
test__fill__output_EXTERNAL_OBJECTS =

src/test-fill-output: src/CMakeFiles/test-fill-output.dir/test-fill-output.c.o
src/test-fill-output: src/CMakeFiles/test-fill-output.dir/build.make
src/test-fill-output: src/librules.so
src/test-fill-output: src/CMakeFiles/test-fill-output.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jrabus/Documents/c/rules-c/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable test-fill-output"
	cd /home/jrabus/Documents/c/rules-c/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test-fill-output.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/test-fill-output.dir/build: src/test-fill-output

.PHONY : src/CMakeFiles/test-fill-output.dir/build

src/CMakeFiles/test-fill-output.dir/clean:
	cd /home/jrabus/Documents/c/rules-c/build/src && $(CMAKE_COMMAND) -P CMakeFiles/test-fill-output.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/test-fill-output.dir/clean

src/CMakeFiles/test-fill-output.dir/depend:
	cd /home/jrabus/Documents/c/rules-c/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jrabus/Documents/c/rules-c /home/jrabus/Documents/c/rules-c/src /home/jrabus/Documents/c/rules-c/build /home/jrabus/Documents/c/rules-c/build/src /home/jrabus/Documents/c/rules-c/build/src/CMakeFiles/test-fill-output.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/test-fill-output.dir/depend

