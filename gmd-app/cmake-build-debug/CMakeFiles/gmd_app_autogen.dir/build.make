# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /home/mua/Software/clion-2020.3.2/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/mua/Software/clion-2020.3.2/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mua/Desktop/gnome-mua-desktop/gmd-app

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mua/Desktop/gnome-mua-desktop/gmd-app/cmake-build-debug

# Utility rule file for gmd_app_autogen.

# Include the progress variables for this target.
include CMakeFiles/gmd_app_autogen.dir/progress.make

CMakeFiles/gmd_app_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/mua/Desktop/gnome-mua-desktop/gmd-app/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target gmd_app"
	/home/mua/Software/clion-2020.3.2/bin/cmake/linux/bin/cmake -E cmake_autogen /home/mua/Desktop/gnome-mua-desktop/gmd-app/cmake-build-debug/CMakeFiles/gmd_app_autogen.dir/AutogenInfo.json Debug

gmd_app_autogen: CMakeFiles/gmd_app_autogen
gmd_app_autogen: CMakeFiles/gmd_app_autogen.dir/build.make

.PHONY : gmd_app_autogen

# Rule to build all files generated by this target.
CMakeFiles/gmd_app_autogen.dir/build: gmd_app_autogen

.PHONY : CMakeFiles/gmd_app_autogen.dir/build

CMakeFiles/gmd_app_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/gmd_app_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/gmd_app_autogen.dir/clean

CMakeFiles/gmd_app_autogen.dir/depend:
	cd /home/mua/Desktop/gnome-mua-desktop/gmd-app/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mua/Desktop/gnome-mua-desktop/gmd-app /home/mua/Desktop/gnome-mua-desktop/gmd-app /home/mua/Desktop/gnome-mua-desktop/gmd-app/cmake-build-debug /home/mua/Desktop/gnome-mua-desktop/gmd-app/cmake-build-debug /home/mua/Desktop/gnome-mua-desktop/gmd-app/cmake-build-debug/CMakeFiles/gmd_app_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/gmd_app_autogen.dir/depend
