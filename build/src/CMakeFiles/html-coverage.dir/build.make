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

# Utility rule file for html-coverage.

# Include the progress variables for this target.
include src/CMakeFiles/html-coverage.dir/progress.make

src/CMakeFiles/html-coverage:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jrabus/Documents/c/rules-c/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building html coverage"
	cd /home/jrabus/Documents/c/rules-c/build/src && /usr/bin/genhtml --output-directory /home/jrabus/Documents/c/rules-c/build/coverage --demangle-cpp --num-spaces 2 --sort --title "Rules  Coverage" --function-coverage --branch-coverage --legend --quiet /home/jrabus/Documents/c/rules-c/build/coverage.info

html-coverage: src/CMakeFiles/html-coverage
html-coverage: src/CMakeFiles/html-coverage.dir/build.make
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "HTML coverage is in /home/jrabus/Documents/c/rules-c/build/coverage"
.PHONY : html-coverage

# Rule to build all files generated by this target.
src/CMakeFiles/html-coverage.dir/build: html-coverage

.PHONY : src/CMakeFiles/html-coverage.dir/build

src/CMakeFiles/html-coverage.dir/clean:
	cd /home/jrabus/Documents/c/rules-c/build/src && $(CMAKE_COMMAND) -P CMakeFiles/html-coverage.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/html-coverage.dir/clean

src/CMakeFiles/html-coverage.dir/depend:
	cd /home/jrabus/Documents/c/rules-c/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jrabus/Documents/c/rules-c /home/jrabus/Documents/c/rules-c/src /home/jrabus/Documents/c/rules-c/build /home/jrabus/Documents/c/rules-c/build/src /home/jrabus/Documents/c/rules-c/build/src/CMakeFiles/html-coverage.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/html-coverage.dir/depend
