# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/hgfs/ubuntu/vip/20210313-kcp/kcp_learn

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/hgfs/ubuntu/vip/20210313-kcp/kcp_learn/build

# Include any dependencies generated for this target.
include CMakeFiles/client.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/client.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/client.dir/flags.make

CMakeFiles/client.dir/client.c.o: CMakeFiles/client.dir/flags.make
CMakeFiles/client.dir/client.c.o: ../client.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/hgfs/ubuntu/vip/20210313-kcp/kcp_learn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/client.dir/client.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/client.dir/client.c.o   -c /mnt/hgfs/ubuntu/vip/20210313-kcp/kcp_learn/client.c

CMakeFiles/client.dir/client.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/client.dir/client.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/hgfs/ubuntu/vip/20210313-kcp/kcp_learn/client.c > CMakeFiles/client.dir/client.c.i

CMakeFiles/client.dir/client.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/client.dir/client.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/hgfs/ubuntu/vip/20210313-kcp/kcp_learn/client.c -o CMakeFiles/client.dir/client.c.s

CMakeFiles/client.dir/client.c.o.requires:

.PHONY : CMakeFiles/client.dir/client.c.o.requires

CMakeFiles/client.dir/client.c.o.provides: CMakeFiles/client.dir/client.c.o.requires
	$(MAKE) -f CMakeFiles/client.dir/build.make CMakeFiles/client.dir/client.c.o.provides.build
.PHONY : CMakeFiles/client.dir/client.c.o.provides

CMakeFiles/client.dir/client.c.o.provides.build: CMakeFiles/client.dir/client.c.o


CMakeFiles/client.dir/ikcp.c.o: CMakeFiles/client.dir/flags.make
CMakeFiles/client.dir/ikcp.c.o: ../ikcp.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/hgfs/ubuntu/vip/20210313-kcp/kcp_learn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/client.dir/ikcp.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/client.dir/ikcp.c.o   -c /mnt/hgfs/ubuntu/vip/20210313-kcp/kcp_learn/ikcp.c

CMakeFiles/client.dir/ikcp.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/client.dir/ikcp.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/hgfs/ubuntu/vip/20210313-kcp/kcp_learn/ikcp.c > CMakeFiles/client.dir/ikcp.c.i

CMakeFiles/client.dir/ikcp.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/client.dir/ikcp.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/hgfs/ubuntu/vip/20210313-kcp/kcp_learn/ikcp.c -o CMakeFiles/client.dir/ikcp.c.s

CMakeFiles/client.dir/ikcp.c.o.requires:

.PHONY : CMakeFiles/client.dir/ikcp.c.o.requires

CMakeFiles/client.dir/ikcp.c.o.provides: CMakeFiles/client.dir/ikcp.c.o.requires
	$(MAKE) -f CMakeFiles/client.dir/build.make CMakeFiles/client.dir/ikcp.c.o.provides.build
.PHONY : CMakeFiles/client.dir/ikcp.c.o.provides

CMakeFiles/client.dir/ikcp.c.o.provides.build: CMakeFiles/client.dir/ikcp.c.o


CMakeFiles/client.dir/delay.c.o: CMakeFiles/client.dir/flags.make
CMakeFiles/client.dir/delay.c.o: ../delay.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/hgfs/ubuntu/vip/20210313-kcp/kcp_learn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/client.dir/delay.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/client.dir/delay.c.o   -c /mnt/hgfs/ubuntu/vip/20210313-kcp/kcp_learn/delay.c

CMakeFiles/client.dir/delay.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/client.dir/delay.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/hgfs/ubuntu/vip/20210313-kcp/kcp_learn/delay.c > CMakeFiles/client.dir/delay.c.i

CMakeFiles/client.dir/delay.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/client.dir/delay.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/hgfs/ubuntu/vip/20210313-kcp/kcp_learn/delay.c -o CMakeFiles/client.dir/delay.c.s

CMakeFiles/client.dir/delay.c.o.requires:

.PHONY : CMakeFiles/client.dir/delay.c.o.requires

CMakeFiles/client.dir/delay.c.o.provides: CMakeFiles/client.dir/delay.c.o.requires
	$(MAKE) -f CMakeFiles/client.dir/build.make CMakeFiles/client.dir/delay.c.o.provides.build
.PHONY : CMakeFiles/client.dir/delay.c.o.provides

CMakeFiles/client.dir/delay.c.o.provides.build: CMakeFiles/client.dir/delay.c.o


# Object files for target client
client_OBJECTS = \
"CMakeFiles/client.dir/client.c.o" \
"CMakeFiles/client.dir/ikcp.c.o" \
"CMakeFiles/client.dir/delay.c.o"

# External object files for target client
client_EXTERNAL_OBJECTS =

client: CMakeFiles/client.dir/client.c.o
client: CMakeFiles/client.dir/ikcp.c.o
client: CMakeFiles/client.dir/delay.c.o
client: CMakeFiles/client.dir/build.make
client: CMakeFiles/client.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/hgfs/ubuntu/vip/20210313-kcp/kcp_learn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable client"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/client.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/client.dir/build: client

.PHONY : CMakeFiles/client.dir/build

CMakeFiles/client.dir/requires: CMakeFiles/client.dir/client.c.o.requires
CMakeFiles/client.dir/requires: CMakeFiles/client.dir/ikcp.c.o.requires
CMakeFiles/client.dir/requires: CMakeFiles/client.dir/delay.c.o.requires

.PHONY : CMakeFiles/client.dir/requires

CMakeFiles/client.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/client.dir/cmake_clean.cmake
.PHONY : CMakeFiles/client.dir/clean

CMakeFiles/client.dir/depend:
	cd /mnt/hgfs/ubuntu/vip/20210313-kcp/kcp_learn/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/hgfs/ubuntu/vip/20210313-kcp/kcp_learn /mnt/hgfs/ubuntu/vip/20210313-kcp/kcp_learn /mnt/hgfs/ubuntu/vip/20210313-kcp/kcp_learn/build /mnt/hgfs/ubuntu/vip/20210313-kcp/kcp_learn/build /mnt/hgfs/ubuntu/vip/20210313-kcp/kcp_learn/build/CMakeFiles/client.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/client.dir/depend

