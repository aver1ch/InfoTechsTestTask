# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.28.3/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.28.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/averichie/Desktop/InfoTechsTestTask

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/averichie/Desktop/InfoTechsTestTask/build/shared

# Include any dependencies generated for this target.
include CMakeFiles/logger.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/logger.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/logger.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/logger.dir/flags.make

CMakeFiles/logger.dir/fileLogger.cpp.o: CMakeFiles/logger.dir/flags.make
CMakeFiles/logger.dir/fileLogger.cpp.o: /Users/averichie/Desktop/InfoTechsTestTask/fileLogger.cpp
CMakeFiles/logger.dir/fileLogger.cpp.o: CMakeFiles/logger.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/averichie/Desktop/InfoTechsTestTask/build/shared/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/logger.dir/fileLogger.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/logger.dir/fileLogger.cpp.o -MF CMakeFiles/logger.dir/fileLogger.cpp.o.d -o CMakeFiles/logger.dir/fileLogger.cpp.o -c /Users/averichie/Desktop/InfoTechsTestTask/fileLogger.cpp

CMakeFiles/logger.dir/fileLogger.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/logger.dir/fileLogger.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/averichie/Desktop/InfoTechsTestTask/fileLogger.cpp > CMakeFiles/logger.dir/fileLogger.cpp.i

CMakeFiles/logger.dir/fileLogger.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/logger.dir/fileLogger.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/averichie/Desktop/InfoTechsTestTask/fileLogger.cpp -o CMakeFiles/logger.dir/fileLogger.cpp.s

CMakeFiles/logger.dir/importance.cpp.o: CMakeFiles/logger.dir/flags.make
CMakeFiles/logger.dir/importance.cpp.o: /Users/averichie/Desktop/InfoTechsTestTask/importance.cpp
CMakeFiles/logger.dir/importance.cpp.o: CMakeFiles/logger.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/averichie/Desktop/InfoTechsTestTask/build/shared/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/logger.dir/importance.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/logger.dir/importance.cpp.o -MF CMakeFiles/logger.dir/importance.cpp.o.d -o CMakeFiles/logger.dir/importance.cpp.o -c /Users/averichie/Desktop/InfoTechsTestTask/importance.cpp

CMakeFiles/logger.dir/importance.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/logger.dir/importance.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/averichie/Desktop/InfoTechsTestTask/importance.cpp > CMakeFiles/logger.dir/importance.cpp.i

CMakeFiles/logger.dir/importance.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/logger.dir/importance.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/averichie/Desktop/InfoTechsTestTask/importance.cpp -o CMakeFiles/logger.dir/importance.cpp.s

CMakeFiles/logger.dir/socketLogger.cpp.o: CMakeFiles/logger.dir/flags.make
CMakeFiles/logger.dir/socketLogger.cpp.o: /Users/averichie/Desktop/InfoTechsTestTask/socketLogger.cpp
CMakeFiles/logger.dir/socketLogger.cpp.o: CMakeFiles/logger.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/averichie/Desktop/InfoTechsTestTask/build/shared/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/logger.dir/socketLogger.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/logger.dir/socketLogger.cpp.o -MF CMakeFiles/logger.dir/socketLogger.cpp.o.d -o CMakeFiles/logger.dir/socketLogger.cpp.o -c /Users/averichie/Desktop/InfoTechsTestTask/socketLogger.cpp

CMakeFiles/logger.dir/socketLogger.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/logger.dir/socketLogger.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/averichie/Desktop/InfoTechsTestTask/socketLogger.cpp > CMakeFiles/logger.dir/socketLogger.cpp.i

CMakeFiles/logger.dir/socketLogger.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/logger.dir/socketLogger.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/averichie/Desktop/InfoTechsTestTask/socketLogger.cpp -o CMakeFiles/logger.dir/socketLogger.cpp.s

# Object files for target logger
logger_OBJECTS = \
"CMakeFiles/logger.dir/fileLogger.cpp.o" \
"CMakeFiles/logger.dir/importance.cpp.o" \
"CMakeFiles/logger.dir/socketLogger.cpp.o"

# External object files for target logger
logger_EXTERNAL_OBJECTS =

liblogger.dylib: CMakeFiles/logger.dir/fileLogger.cpp.o
liblogger.dylib: CMakeFiles/logger.dir/importance.cpp.o
liblogger.dylib: CMakeFiles/logger.dir/socketLogger.cpp.o
liblogger.dylib: CMakeFiles/logger.dir/build.make
liblogger.dylib: CMakeFiles/logger.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/averichie/Desktop/InfoTechsTestTask/build/shared/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX shared library liblogger.dylib"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/logger.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/logger.dir/build: liblogger.dylib
.PHONY : CMakeFiles/logger.dir/build

CMakeFiles/logger.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/logger.dir/cmake_clean.cmake
.PHONY : CMakeFiles/logger.dir/clean

CMakeFiles/logger.dir/depend:
	cd /Users/averichie/Desktop/InfoTechsTestTask/build/shared && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/averichie/Desktop/InfoTechsTestTask /Users/averichie/Desktop/InfoTechsTestTask /Users/averichie/Desktop/InfoTechsTestTask/build/shared /Users/averichie/Desktop/InfoTechsTestTask/build/shared /Users/averichie/Desktop/InfoTechsTestTask/build/shared/CMakeFiles/logger.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/logger.dir/depend

