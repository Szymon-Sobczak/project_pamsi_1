# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ader/Pulpit/PROJECT_PAMSI_1/PROJECT_PAMSI_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ader/Pulpit/PROJECT_PAMSI_1/PROJECT_PAMSI_1/build

# Include any dependencies generated for this target.
include CMakeFiles/program.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/program.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/program.dir/flags.make

CMakeFiles/program.dir/src/dummy.cpp.o: CMakeFiles/program.dir/flags.make
CMakeFiles/program.dir/src/dummy.cpp.o: ../src/dummy.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ader/Pulpit/PROJECT_PAMSI_1/PROJECT_PAMSI_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/program.dir/src/dummy.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/program.dir/src/dummy.cpp.o -c /home/ader/Pulpit/PROJECT_PAMSI_1/PROJECT_PAMSI_1/src/dummy.cpp

CMakeFiles/program.dir/src/dummy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/program.dir/src/dummy.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ader/Pulpit/PROJECT_PAMSI_1/PROJECT_PAMSI_1/src/dummy.cpp > CMakeFiles/program.dir/src/dummy.cpp.i

CMakeFiles/program.dir/src/dummy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/program.dir/src/dummy.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ader/Pulpit/PROJECT_PAMSI_1/PROJECT_PAMSI_1/src/dummy.cpp -o CMakeFiles/program.dir/src/dummy.cpp.s

program: CMakeFiles/program.dir/src/dummy.cpp.o
program: CMakeFiles/program.dir/build.make

.PHONY : program

# Rule to build all files generated by this target.
CMakeFiles/program.dir/build: program

.PHONY : CMakeFiles/program.dir/build

CMakeFiles/program.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/program.dir/cmake_clean.cmake
.PHONY : CMakeFiles/program.dir/clean

CMakeFiles/program.dir/depend:
	cd /home/ader/Pulpit/PROJECT_PAMSI_1/PROJECT_PAMSI_1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ader/Pulpit/PROJECT_PAMSI_1/PROJECT_PAMSI_1 /home/ader/Pulpit/PROJECT_PAMSI_1/PROJECT_PAMSI_1 /home/ader/Pulpit/PROJECT_PAMSI_1/PROJECT_PAMSI_1/build /home/ader/Pulpit/PROJECT_PAMSI_1/PROJECT_PAMSI_1/build /home/ader/Pulpit/PROJECT_PAMSI_1/PROJECT_PAMSI_1/build/CMakeFiles/program.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/program.dir/depend

