# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /home/jsteeg/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/211.6693.114/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/jsteeg/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/211.6693.114/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jsteeg/CLionProjects/uni/afg2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jsteeg/CLionProjects/uni/afg2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/afg2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/afg2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/afg2.dir/flags.make

CMakeFiles/afg2.dir/bit_operations.cpp.o: CMakeFiles/afg2.dir/flags.make
CMakeFiles/afg2.dir/bit_operations.cpp.o: ../bit_operations.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jsteeg/CLionProjects/uni/afg2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/afg2.dir/bit_operations.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/afg2.dir/bit_operations.cpp.o -c /home/jsteeg/CLionProjects/uni/afg2/bit_operations.cpp

CMakeFiles/afg2.dir/bit_operations.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/afg2.dir/bit_operations.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jsteeg/CLionProjects/uni/afg2/bit_operations.cpp > CMakeFiles/afg2.dir/bit_operations.cpp.i

CMakeFiles/afg2.dir/bit_operations.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/afg2.dir/bit_operations.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jsteeg/CLionProjects/uni/afg2/bit_operations.cpp -o CMakeFiles/afg2.dir/bit_operations.cpp.s

# Object files for target afg2
afg2_OBJECTS = \
"CMakeFiles/afg2.dir/bit_operations.cpp.o"

# External object files for target afg2
afg2_EXTERNAL_OBJECTS =

afg2: CMakeFiles/afg2.dir/bit_operations.cpp.o
afg2: CMakeFiles/afg2.dir/build.make
afg2: CMakeFiles/afg2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jsteeg/CLionProjects/uni/afg2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable afg2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/afg2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/afg2.dir/build: afg2

.PHONY : CMakeFiles/afg2.dir/build

CMakeFiles/afg2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/afg2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/afg2.dir/clean

CMakeFiles/afg2.dir/depend:
	cd /home/jsteeg/CLionProjects/uni/afg2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jsteeg/CLionProjects/uni/afg2 /home/jsteeg/CLionProjects/uni/afg2 /home/jsteeg/CLionProjects/uni/afg2/cmake-build-debug /home/jsteeg/CLionProjects/uni/afg2/cmake-build-debug /home/jsteeg/CLionProjects/uni/afg2/cmake-build-debug/CMakeFiles/afg2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/afg2.dir/depend
