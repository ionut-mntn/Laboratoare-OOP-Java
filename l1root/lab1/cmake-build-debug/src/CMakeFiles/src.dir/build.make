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
CMAKE_SOURCE_DIR = "D:\ionut\Info\Faculta\sem II\POO - Programare Orientata pe Obiect ( Rusu Catalin, Manda Iulian )\Laboratoare\lab1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\ionut\Info\Faculta\sem II\POO - Programare Orientata pe Obiect ( Rusu Catalin, Manda Iulian )\Laboratoare\lab1\cmake-build-debug"

# Include any dependencies generated for this target.
include src/CMakeFiles/src.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/src.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/src.dir/flags.make

src/CMakeFiles/src.dir/sequences.cpp.obj: src/CMakeFiles/src.dir/flags.make
src/CMakeFiles/src.dir/sequences.cpp.obj: src/CMakeFiles/src.dir/includes_CXX.rsp
src/CMakeFiles/src.dir/sequences.cpp.obj: ../src/sequences.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\ionut\Info\Faculta\sem II\POO - Programare Orientata pe Obiect ( Rusu Catalin, Manda Iulian )\Laboratoare\lab1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/src.dir/sequences.cpp.obj"
	cd /d D:\ionut\Info\Faculta\SEMII~1\POO-PR~1\LABORA~1\lab1\CMAKE-~1\src && C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\src.dir\sequences.cpp.obj -c "D:\ionut\Info\Faculta\sem II\POO - Programare Orientata pe Obiect ( Rusu Catalin, Manda Iulian )\Laboratoare\lab1\src\sequences.cpp"

src/CMakeFiles/src.dir/sequences.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/src.dir/sequences.cpp.i"
	cd /d D:\ionut\Info\Faculta\SEMII~1\POO-PR~1\LABORA~1\lab1\CMAKE-~1\src && C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\ionut\Info\Faculta\sem II\POO - Programare Orientata pe Obiect ( Rusu Catalin, Manda Iulian )\Laboratoare\lab1\src\sequences.cpp" > CMakeFiles\src.dir\sequences.cpp.i

src/CMakeFiles/src.dir/sequences.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/src.dir/sequences.cpp.s"
	cd /d D:\ionut\Info\Faculta\SEMII~1\POO-PR~1\LABORA~1\lab1\CMAKE-~1\src && C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\ionut\Info\Faculta\sem II\POO - Programare Orientata pe Obiect ( Rusu Catalin, Manda Iulian )\Laboratoare\lab1\src\sequences.cpp" -o CMakeFiles\src.dir\sequences.cpp.s

# Object files for target src
src_OBJECTS = \
"CMakeFiles/src.dir/sequences.cpp.obj"

# External object files for target src
src_EXTERNAL_OBJECTS =

src/libsrc.a: src/CMakeFiles/src.dir/sequences.cpp.obj
src/libsrc.a: src/CMakeFiles/src.dir/build.make
src/libsrc.a: src/CMakeFiles/src.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\ionut\Info\Faculta\sem II\POO - Programare Orientata pe Obiect ( Rusu Catalin, Manda Iulian )\Laboratoare\lab1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libsrc.a"
	cd /d D:\ionut\Info\Faculta\SEMII~1\POO-PR~1\LABORA~1\lab1\CMAKE-~1\src && $(CMAKE_COMMAND) -P CMakeFiles\src.dir\cmake_clean_target.cmake
	cd /d D:\ionut\Info\Faculta\SEMII~1\POO-PR~1\LABORA~1\lab1\CMAKE-~1\src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\src.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/src.dir/build: src/libsrc.a

.PHONY : src/CMakeFiles/src.dir/build

src/CMakeFiles/src.dir/clean:
	cd /d D:\ionut\Info\Faculta\SEMII~1\POO-PR~1\LABORA~1\lab1\CMAKE-~1\src && $(CMAKE_COMMAND) -P CMakeFiles\src.dir\cmake_clean.cmake
.PHONY : src/CMakeFiles/src.dir/clean

src/CMakeFiles/src.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\ionut\Info\Faculta\sem II\POO - Programare Orientata pe Obiect ( Rusu Catalin, Manda Iulian )\Laboratoare\lab1" "D:\ionut\Info\Faculta\sem II\POO - Programare Orientata pe Obiect ( Rusu Catalin, Manda Iulian )\Laboratoare\lab1\src" "D:\ionut\Info\Faculta\sem II\POO - Programare Orientata pe Obiect ( Rusu Catalin, Manda Iulian )\Laboratoare\lab1\cmake-build-debug" "D:\ionut\Info\Faculta\sem II\POO - Programare Orientata pe Obiect ( Rusu Catalin, Manda Iulian )\Laboratoare\lab1\cmake-build-debug\src" "D:\ionut\Info\Faculta\sem II\POO - Programare Orientata pe Obiect ( Rusu Catalin, Manda Iulian )\Laboratoare\lab1\cmake-build-debug\src\CMakeFiles\src.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : src/CMakeFiles/src.dir/depend
