# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/ubuntu/workSpace/ipcDemo/subApp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ubuntu/workSpace/ipcDemo/subApp/build

# Include any dependencies generated for this target.
include CMakeFiles/subipc.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/subipc.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/subipc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/subipc.dir/flags.make

CMakeFiles/subipc.dir/main.cpp.o: CMakeFiles/subipc.dir/flags.make
CMakeFiles/subipc.dir/main.cpp.o: ../main.cpp
CMakeFiles/subipc.dir/main.cpp.o: CMakeFiles/subipc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/workSpace/ipcDemo/subApp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/subipc.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/subipc.dir/main.cpp.o -MF CMakeFiles/subipc.dir/main.cpp.o.d -o CMakeFiles/subipc.dir/main.cpp.o -c /home/ubuntu/workSpace/ipcDemo/subApp/main.cpp

CMakeFiles/subipc.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/subipc.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/workSpace/ipcDemo/subApp/main.cpp > CMakeFiles/subipc.dir/main.cpp.i

CMakeFiles/subipc.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/subipc.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/workSpace/ipcDemo/subApp/main.cpp -o CMakeFiles/subipc.dir/main.cpp.s

CMakeFiles/subipc.dir/sources/foo.cpp.o: CMakeFiles/subipc.dir/flags.make
CMakeFiles/subipc.dir/sources/foo.cpp.o: ../sources/foo.cpp
CMakeFiles/subipc.dir/sources/foo.cpp.o: CMakeFiles/subipc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/workSpace/ipcDemo/subApp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/subipc.dir/sources/foo.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/subipc.dir/sources/foo.cpp.o -MF CMakeFiles/subipc.dir/sources/foo.cpp.o.d -o CMakeFiles/subipc.dir/sources/foo.cpp.o -c /home/ubuntu/workSpace/ipcDemo/subApp/sources/foo.cpp

CMakeFiles/subipc.dir/sources/foo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/subipc.dir/sources/foo.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/workSpace/ipcDemo/subApp/sources/foo.cpp > CMakeFiles/subipc.dir/sources/foo.cpp.i

CMakeFiles/subipc.dir/sources/foo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/subipc.dir/sources/foo.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/workSpace/ipcDemo/subApp/sources/foo.cpp -o CMakeFiles/subipc.dir/sources/foo.cpp.s

# Object files for target subipc
subipc_OBJECTS = \
"CMakeFiles/subipc.dir/main.cpp.o" \
"CMakeFiles/subipc.dir/sources/foo.cpp.o"

# External object files for target subipc
subipc_EXTERNAL_OBJECTS =

subipc: CMakeFiles/subipc.dir/main.cpp.o
subipc: CMakeFiles/subipc.dir/sources/foo.cpp.o
subipc: CMakeFiles/subipc.dir/build.make
subipc: CMakeFiles/subipc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ubuntu/workSpace/ipcDemo/subApp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable subipc"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/subipc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/subipc.dir/build: subipc
.PHONY : CMakeFiles/subipc.dir/build

CMakeFiles/subipc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/subipc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/subipc.dir/clean

CMakeFiles/subipc.dir/depend:
	cd /home/ubuntu/workSpace/ipcDemo/subApp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/workSpace/ipcDemo/subApp /home/ubuntu/workSpace/ipcDemo/subApp /home/ubuntu/workSpace/ipcDemo/subApp/build /home/ubuntu/workSpace/ipcDemo/subApp/build /home/ubuntu/workSpace/ipcDemo/subApp/build/CMakeFiles/subipc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/subipc.dir/depend

