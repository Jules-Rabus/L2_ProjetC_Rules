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

# Utility rule file for clang-format.

# Include the progress variables for this target.
include CMakeFiles/clang-format.dir/progress.make

CMakeFiles/clang-format:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jrabus/Documents/c/rules-c/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Format sources."
	/usr/bin/clang-format -i -style=file /home/jrabus/Documents/c/rules-c/src/*.c /home/jrabus/Documents/c/rules-c/src/*.h

clang-format: CMakeFiles/clang-format
clang-format: CMakeFiles/clang-format.dir/build.make

.PHONY : clang-format

# Rule to build all files generated by this target.
CMakeFiles/clang-format.dir/build: clang-format

.PHONY : CMakeFiles/clang-format.dir/build

CMakeFiles/clang-format.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/clang-format.dir/cmake_clean.cmake
.PHONY : CMakeFiles/clang-format.dir/clean

CMakeFiles/clang-format.dir/depend:
	cd /home/jrabus/Documents/c/rules-c/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jrabus/Documents/c/rules-c /home/jrabus/Documents/c/rules-c /home/jrabus/Documents/c/rules-c/build /home/jrabus/Documents/c/rules-c/build /home/jrabus/Documents/c/rules-c/build/CMakeFiles/clang-format.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/clang-format.dir/depend
