# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\ionut\Info\Faculta\sem II\POO - Programare Orientata pe Obiect ( Rusu Catalin, Manda Iulian )\Laboratoare\lab2prof\oop-master"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\ionut\Info\Faculta\sem II\POO - Programare Orientata pe Obiect ( Rusu Catalin, Manda Iulian )\Laboratoare\lab2prof\oop-master\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/src_run.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/src_run.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/src_run.dir/flags.make

CMakeFiles/src_run.dir/main.cpp.obj: CMakeFiles/src_run.dir/flags.make
CMakeFiles/src_run.dir/main.cpp.obj: CMakeFiles/src_run.dir/includes_CXX.rsp
CMakeFiles/src_run.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\ionut\Info\Faculta\sem II\POO - Programare Orientata pe Obiect ( Rusu Catalin, Manda Iulian )\Laboratoare\lab2prof\oop-master\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/src_run.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\src_run.dir\main.cpp.obj -c "D:\ionut\Info\Faculta\sem II\POO - Programare Orientata pe Obiect ( Rusu Catalin, Manda Iulian )\Laboratoare\lab2prof\oop-master\main.cpp"

CMakeFiles/src_run.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/src_run.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\ionut\Info\Faculta\sem II\POO - Programare Orientata pe Obiect ( Rusu Catalin, Manda Iulian )\Laboratoare\lab2prof\oop-master\main.cpp" > CMakeFiles\src_run.dir\main.cpp.i

CMakeFiles/src_run.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/src_run.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\ionut\Info\Faculta\sem II\POO - Programare Orientata pe Obiect ( Rusu Catalin, Manda Iulian )\Laboratoare\lab2prof\oop-master\main.cpp" -o CMakeFiles\src_run.dir\main.cpp.s

# Object files for target src_run
src_run_OBJECTS = \
"CMakeFiles/src_run.dir/main.cpp.obj"

# External object files for target src_run
src_run_EXTERNAL_OBJECTS =

src_run.exe: CMakeFiles/src_run.dir/main.cpp.obj
src_run.exe: CMakeFiles/src_run.dir/build.make
src_run.exe: src/libsrc.a
src_run.exe: CMakeFiles/src_run.dir/linklibs.rsp
src_run.exe: CMakeFiles/src_run.dir/objects1.rsp
src_run.exe: CMakeFiles/src_run.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\ionut\Info\Faculta\sem II\POO - Programare Orientata pe Obiect ( Rusu Catalin, Manda Iulian )\Laboratoare\lab2prof\oop-master\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable src_run.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\src_run.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/src_run.dir/build: src_run.exe

.PHONY : CMakeFiles/src_run.dir/build

CMakeFiles/src_run.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\src_run.dir\cmake_clean.cmake
.PHONY : CMakeFiles/src_run.dir/clean

CMakeFiles/src_run.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\ionut\Info\Faculta\sem II\POO - Programare Orientata pe Obiect ( Rusu Catalin, Manda Iulian )\Laboratoare\lab2prof\oop-master" "D:\ionut\Info\Faculta\sem II\POO - Programare Orientata pe Obiect ( Rusu Catalin, Manda Iulian )\Laboratoare\lab2prof\oop-master" "D:\ionut\Info\Faculta\sem II\POO - Programare Orientata pe Obiect ( Rusu Catalin, Manda Iulian )\Laboratoare\lab2prof\oop-master\cmake-build-debug" "D:\ionut\Info\Faculta\sem II\POO - Programare Orientata pe Obiect ( Rusu Catalin, Manda Iulian )\Laboratoare\lab2prof\oop-master\cmake-build-debug" "D:\ionut\Info\Faculta\sem II\POO - Programare Orientata pe Obiect ( Rusu Catalin, Manda Iulian )\Laboratoare\lab2prof\oop-master\cmake-build-debug\CMakeFiles\src_run.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/src_run.dir/depend

