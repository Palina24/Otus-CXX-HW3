# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_SOURCE_DIR = /home/palina/otus/cxx-basic/HW3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/palina/otus/cxx-basic/HW3/build

# Include any dependencies generated for this target.
include CMakeFiles/argument.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/argument.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/argument.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/argument.dir/flags.make

CMakeFiles/argument.dir/argument.cpp.o: CMakeFiles/argument.dir/flags.make
CMakeFiles/argument.dir/argument.cpp.o: /home/palina/otus/cxx-basic/HW3/argument.cpp
CMakeFiles/argument.dir/argument.cpp.o: CMakeFiles/argument.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/palina/otus/cxx-basic/HW3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/argument.dir/argument.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/argument.dir/argument.cpp.o -MF CMakeFiles/argument.dir/argument.cpp.o.d -o CMakeFiles/argument.dir/argument.cpp.o -c /home/palina/otus/cxx-basic/HW3/argument.cpp

CMakeFiles/argument.dir/argument.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/argument.dir/argument.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/palina/otus/cxx-basic/HW3/argument.cpp > CMakeFiles/argument.dir/argument.cpp.i

CMakeFiles/argument.dir/argument.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/argument.dir/argument.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/palina/otus/cxx-basic/HW3/argument.cpp -o CMakeFiles/argument.dir/argument.cpp.s

# Object files for target argument
argument_OBJECTS = \
"CMakeFiles/argument.dir/argument.cpp.o"

# External object files for target argument
argument_EXTERNAL_OBJECTS =

argument: CMakeFiles/argument.dir/argument.cpp.o
argument: CMakeFiles/argument.dir/build.make
argument: CMakeFiles/argument.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/palina/otus/cxx-basic/HW3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable argument"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/argument.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/argument.dir/build: argument
.PHONY : CMakeFiles/argument.dir/build

CMakeFiles/argument.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/argument.dir/cmake_clean.cmake
.PHONY : CMakeFiles/argument.dir/clean

CMakeFiles/argument.dir/depend:
	cd /home/palina/otus/cxx-basic/HW3/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/palina/otus/cxx-basic/HW3 /home/palina/otus/cxx-basic/HW3 /home/palina/otus/cxx-basic/HW3/build /home/palina/otus/cxx-basic/HW3/build /home/palina/otus/cxx-basic/HW3/build/CMakeFiles/argument.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/argument.dir/depend

