# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.27

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2023.3.4\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2023.3.4\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\blake\OneDrive\Documents\GitHub\CIS121\Week 10\Portfolio\TImes Are Changing"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\blake\OneDrive\Documents\GitHub\CIS121\Week 10\Portfolio\TImes Are Changing\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/TImes_Are_Changing.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/TImes_Are_Changing.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/TImes_Are_Changing.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TImes_Are_Changing.dir/flags.make

CMakeFiles/TImes_Are_Changing.dir/main.cpp.obj: CMakeFiles/TImes_Are_Changing.dir/flags.make
CMakeFiles/TImes_Are_Changing.dir/main.cpp.obj: C:/Users/blake/OneDrive/Documents/GitHub/CIS121/Week\ 10/Portfolio/TImes\ Are\ Changing/main.cpp
CMakeFiles/TImes_Are_Changing.dir/main.cpp.obj: CMakeFiles/TImes_Are_Changing.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\blake\OneDrive\Documents\GitHub\CIS121\Week 10\Portfolio\TImes Are Changing\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TImes_Are_Changing.dir/main.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TImes_Are_Changing.dir/main.cpp.obj -MF CMakeFiles\TImes_Are_Changing.dir\main.cpp.obj.d -o CMakeFiles\TImes_Are_Changing.dir\main.cpp.obj -c "C:\Users\blake\OneDrive\Documents\GitHub\CIS121\Week 10\Portfolio\TImes Are Changing\main.cpp"

CMakeFiles/TImes_Are_Changing.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/TImes_Are_Changing.dir/main.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\blake\OneDrive\Documents\GitHub\CIS121\Week 10\Portfolio\TImes Are Changing\main.cpp" > CMakeFiles\TImes_Are_Changing.dir\main.cpp.i

CMakeFiles/TImes_Are_Changing.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/TImes_Are_Changing.dir/main.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\blake\OneDrive\Documents\GitHub\CIS121\Week 10\Portfolio\TImes Are Changing\main.cpp" -o CMakeFiles\TImes_Are_Changing.dir\main.cpp.s

# Object files for target TImes_Are_Changing
TImes_Are_Changing_OBJECTS = \
"CMakeFiles/TImes_Are_Changing.dir/main.cpp.obj"

# External object files for target TImes_Are_Changing
TImes_Are_Changing_EXTERNAL_OBJECTS =

TImes_Are_Changing.exe: CMakeFiles/TImes_Are_Changing.dir/main.cpp.obj
TImes_Are_Changing.exe: CMakeFiles/TImes_Are_Changing.dir/build.make
TImes_Are_Changing.exe: CMakeFiles/TImes_Are_Changing.dir/linkLibs.rsp
TImes_Are_Changing.exe: CMakeFiles/TImes_Are_Changing.dir/objects1.rsp
TImes_Are_Changing.exe: CMakeFiles/TImes_Are_Changing.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="C:\Users\blake\OneDrive\Documents\GitHub\CIS121\Week 10\Portfolio\TImes Are Changing\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TImes_Are_Changing.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\TImes_Are_Changing.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TImes_Are_Changing.dir/build: TImes_Are_Changing.exe
.PHONY : CMakeFiles/TImes_Are_Changing.dir/build

CMakeFiles/TImes_Are_Changing.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\TImes_Are_Changing.dir\cmake_clean.cmake
.PHONY : CMakeFiles/TImes_Are_Changing.dir/clean

CMakeFiles/TImes_Are_Changing.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\blake\OneDrive\Documents\GitHub\CIS121\Week 10\Portfolio\TImes Are Changing" "C:\Users\blake\OneDrive\Documents\GitHub\CIS121\Week 10\Portfolio\TImes Are Changing" "C:\Users\blake\OneDrive\Documents\GitHub\CIS121\Week 10\Portfolio\TImes Are Changing\cmake-build-debug" "C:\Users\blake\OneDrive\Documents\GitHub\CIS121\Week 10\Portfolio\TImes Are Changing\cmake-build-debug" "C:\Users\blake\OneDrive\Documents\GitHub\CIS121\Week 10\Portfolio\TImes Are Changing\cmake-build-debug\CMakeFiles\TImes_Are_Changing.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/TImes_Are_Changing.dir/depend
