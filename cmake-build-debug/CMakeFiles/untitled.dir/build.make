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
CMAKE_COMMAND = /snap/clion/83/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/83/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/aluno/Documentos/TP1-LAEDS

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/aluno/Documentos/TP1-LAEDS/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/untitled.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/untitled.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/untitled.dir/flags.make

CMakeFiles/untitled.dir/main.c.o: CMakeFiles/untitled.dir/flags.make
CMakeFiles/untitled.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aluno/Documentos/TP1-LAEDS/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/untitled.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/untitled.dir/main.c.o   -c /home/aluno/Documentos/TP1-LAEDS/main.c

CMakeFiles/untitled.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/aluno/Documentos/TP1-LAEDS/main.c > CMakeFiles/untitled.dir/main.c.i

CMakeFiles/untitled.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/aluno/Documentos/TP1-LAEDS/main.c -o CMakeFiles/untitled.dir/main.c.s

CMakeFiles/untitled.dir/C_files/pegar_do_arquivo.c.o: CMakeFiles/untitled.dir/flags.make
CMakeFiles/untitled.dir/C_files/pegar_do_arquivo.c.o: ../C\ files/pegar_do_arquivo.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aluno/Documentos/TP1-LAEDS/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/untitled.dir/C_files/pegar_do_arquivo.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/untitled.dir/C_files/pegar_do_arquivo.c.o   -c "/home/aluno/Documentos/TP1-LAEDS/C files/pegar_do_arquivo.c"

CMakeFiles/untitled.dir/C_files/pegar_do_arquivo.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled.dir/C_files/pegar_do_arquivo.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/aluno/Documentos/TP1-LAEDS/C files/pegar_do_arquivo.c" > CMakeFiles/untitled.dir/C_files/pegar_do_arquivo.c.i

CMakeFiles/untitled.dir/C_files/pegar_do_arquivo.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled.dir/C_files/pegar_do_arquivo.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/aluno/Documentos/TP1-LAEDS/C files/pegar_do_arquivo.c" -o CMakeFiles/untitled.dir/C_files/pegar_do_arquivo.c.s

CMakeFiles/untitled.dir/C_files/guloso_solution.c.o: CMakeFiles/untitled.dir/flags.make
CMakeFiles/untitled.dir/C_files/guloso_solution.c.o: ../C\ files/guloso_solution.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aluno/Documentos/TP1-LAEDS/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/untitled.dir/C_files/guloso_solution.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/untitled.dir/C_files/guloso_solution.c.o   -c "/home/aluno/Documentos/TP1-LAEDS/C files/guloso_solution.c"

CMakeFiles/untitled.dir/C_files/guloso_solution.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled.dir/C_files/guloso_solution.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/aluno/Documentos/TP1-LAEDS/C files/guloso_solution.c" > CMakeFiles/untitled.dir/C_files/guloso_solution.c.i

CMakeFiles/untitled.dir/C_files/guloso_solution.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled.dir/C_files/guloso_solution.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/aluno/Documentos/TP1-LAEDS/C files/guloso_solution.c" -o CMakeFiles/untitled.dir/C_files/guloso_solution.c.s

CMakeFiles/untitled.dir/C_files/bruto_solution.c.o: CMakeFiles/untitled.dir/flags.make
CMakeFiles/untitled.dir/C_files/bruto_solution.c.o: ../C\ files/bruto_solution.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aluno/Documentos/TP1-LAEDS/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/untitled.dir/C_files/bruto_solution.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/untitled.dir/C_files/bruto_solution.c.o   -c "/home/aluno/Documentos/TP1-LAEDS/C files/bruto_solution.c"

CMakeFiles/untitled.dir/C_files/bruto_solution.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled.dir/C_files/bruto_solution.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/aluno/Documentos/TP1-LAEDS/C files/bruto_solution.c" > CMakeFiles/untitled.dir/C_files/bruto_solution.c.i

CMakeFiles/untitled.dir/C_files/bruto_solution.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled.dir/C_files/bruto_solution.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/aluno/Documentos/TP1-LAEDS/C files/bruto_solution.c" -o CMakeFiles/untitled.dir/C_files/bruto_solution.c.s

# Object files for target untitled
untitled_OBJECTS = \
"CMakeFiles/untitled.dir/main.c.o" \
"CMakeFiles/untitled.dir/C_files/pegar_do_arquivo.c.o" \
"CMakeFiles/untitled.dir/C_files/guloso_solution.c.o" \
"CMakeFiles/untitled.dir/C_files/bruto_solution.c.o"

# External object files for target untitled
untitled_EXTERNAL_OBJECTS =

untitled: CMakeFiles/untitled.dir/main.c.o
untitled: CMakeFiles/untitled.dir/C_files/pegar_do_arquivo.c.o
untitled: CMakeFiles/untitled.dir/C_files/guloso_solution.c.o
untitled: CMakeFiles/untitled.dir/C_files/bruto_solution.c.o
untitled: CMakeFiles/untitled.dir/build.make
untitled: CMakeFiles/untitled.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/aluno/Documentos/TP1-LAEDS/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking C executable untitled"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/untitled.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/untitled.dir/build: untitled

.PHONY : CMakeFiles/untitled.dir/build

CMakeFiles/untitled.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/untitled.dir/cmake_clean.cmake
.PHONY : CMakeFiles/untitled.dir/clean

CMakeFiles/untitled.dir/depend:
	cd /home/aluno/Documentos/TP1-LAEDS/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aluno/Documentos/TP1-LAEDS /home/aluno/Documentos/TP1-LAEDS /home/aluno/Documentos/TP1-LAEDS/cmake-build-debug /home/aluno/Documentos/TP1-LAEDS/cmake-build-debug /home/aluno/Documentos/TP1-LAEDS/cmake-build-debug/CMakeFiles/untitled.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/untitled.dir/depend

