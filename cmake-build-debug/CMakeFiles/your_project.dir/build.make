# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /home/gridlock/clion-2019.3.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/gridlock/clion-2019.3.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/gridlock/GIT/Study

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gridlock/GIT/Study/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/your_project.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/your_project.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/your_project.dir/flags.make

CMakeFiles/your_project.dir/main.cpp.o: CMakeFiles/your_project.dir/flags.make
CMakeFiles/your_project.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gridlock/GIT/Study/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/your_project.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/your_project.dir/main.cpp.o -c /home/gridlock/GIT/Study/main.cpp

CMakeFiles/your_project.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/your_project.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gridlock/GIT/Study/main.cpp > CMakeFiles/your_project.dir/main.cpp.i

CMakeFiles/your_project.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/your_project.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gridlock/GIT/Study/main.cpp -o CMakeFiles/your_project.dir/main.cpp.s

# Object files for target your_project
your_project_OBJECTS = \
"CMakeFiles/your_project.dir/main.cpp.o"

# External object files for target your_project
your_project_EXTERNAL_OBJECTS =

your_project: CMakeFiles/your_project.dir/main.cpp.o
your_project: CMakeFiles/your_project.dir/build.make
your_project: CMakeFiles/your_project.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gridlock/GIT/Study/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable your_project"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/your_project.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/your_project.dir/build: your_project

.PHONY : CMakeFiles/your_project.dir/build

CMakeFiles/your_project.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/your_project.dir/cmake_clean.cmake
.PHONY : CMakeFiles/your_project.dir/clean

CMakeFiles/your_project.dir/depend:
	cd /home/gridlock/GIT/Study/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gridlock/GIT/Study /home/gridlock/GIT/Study /home/gridlock/GIT/Study/cmake-build-debug /home/gridlock/GIT/Study/cmake-build-debug /home/gridlock/GIT/Study/cmake-build-debug/CMakeFiles/your_project.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/your_project.dir/depend

