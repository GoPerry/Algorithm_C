# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /home/pyuan/software/clion-2019.2.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/pyuan/software/clion-2019.2.1/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/pyuan/CLionProjects/BiTree

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pyuan/CLionProjects/BiTree/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/BiTree.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BiTree.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BiTree.dir/flags.make

CMakeFiles/BiTree.dir/main.c.o: CMakeFiles/BiTree.dir/flags.make
CMakeFiles/BiTree.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pyuan/CLionProjects/BiTree/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/BiTree.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/BiTree.dir/main.c.o   -c /home/pyuan/CLionProjects/BiTree/main.c

CMakeFiles/BiTree.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/BiTree.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/pyuan/CLionProjects/BiTree/main.c > CMakeFiles/BiTree.dir/main.c.i

CMakeFiles/BiTree.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/BiTree.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/pyuan/CLionProjects/BiTree/main.c -o CMakeFiles/BiTree.dir/main.c.s

# Object files for target BiTree
BiTree_OBJECTS = \
"CMakeFiles/BiTree.dir/main.c.o"

# External object files for target BiTree
BiTree_EXTERNAL_OBJECTS =

BiTree: CMakeFiles/BiTree.dir/main.c.o
BiTree: CMakeFiles/BiTree.dir/build.make
BiTree: CMakeFiles/BiTree.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pyuan/CLionProjects/BiTree/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable BiTree"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BiTree.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BiTree.dir/build: BiTree

.PHONY : CMakeFiles/BiTree.dir/build

CMakeFiles/BiTree.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/BiTree.dir/cmake_clean.cmake
.PHONY : CMakeFiles/BiTree.dir/clean

CMakeFiles/BiTree.dir/depend:
	cd /home/pyuan/CLionProjects/BiTree/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pyuan/CLionProjects/BiTree /home/pyuan/CLionProjects/BiTree /home/pyuan/CLionProjects/BiTree/cmake-build-debug /home/pyuan/CLionProjects/BiTree/cmake-build-debug /home/pyuan/CLionProjects/BiTree/cmake-build-debug/CMakeFiles/BiTree.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BiTree.dir/depend

