# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_COMMAND = /home/pedro/Downloads/clion-2019.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/pedro/Downloads/clion-2019.1/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/pedro/Documentos/UnB/4_Semestre/Metodos_de_programacao/Trabalhos/Trabalho_01

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pedro/Documentos/UnB/4_Semestre/Metodos_de_programacao/Trabalhos/Trabalho_01

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/home/pedro/Downloads/clion-2019.1/bin/cmake/linux/bin/cmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/home/pedro/Downloads/clion-2019.1/bin/cmake/linux/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/pedro/Documentos/UnB/4_Semestre/Metodos_de_programacao/Trabalhos/Trabalho_01/CMakeFiles /home/pedro/Documentos/UnB/4_Semestre/Metodos_de_programacao/Trabalhos/Trabalho_01/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/pedro/Documentos/UnB/4_Semestre/Metodos_de_programacao/Trabalhos/Trabalho_01/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named executeTestes

# Build rule for target.
executeTestes: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 executeTestes
.PHONY : executeTestes

# fast build rule for target.
executeTestes/fast:
	$(MAKE) -f CMakeFiles/executeTestes.dir/build.make CMakeFiles/executeTestes.dir/build
.PHONY : executeTestes/fast

gTest.o: gTest.cpp.o

.PHONY : gTest.o

# target to build an object file
gTest.cpp.o:
	$(MAKE) -f CMakeFiles/executeTestes.dir/build.make CMakeFiles/executeTestes.dir/gTest.cpp.o
.PHONY : gTest.cpp.o

gTest.i: gTest.cpp.i

.PHONY : gTest.i

# target to preprocess a source file
gTest.cpp.i:
	$(MAKE) -f CMakeFiles/executeTestes.dir/build.make CMakeFiles/executeTestes.dir/gTest.cpp.i
.PHONY : gTest.cpp.i

gTest.s: gTest.cpp.s

.PHONY : gTest.s

# target to generate assembly for a file
gTest.cpp.s:
	$(MAKE) -f CMakeFiles/executeTestes.dir/build.make CMakeFiles/executeTestes.dir/gTest.cpp.s
.PHONY : gTest.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... executeTestes"
	@echo "... edit_cache"
	@echo "... gTest.o"
	@echo "... gTest.i"
	@echo "... gTest.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system
