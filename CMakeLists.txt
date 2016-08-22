cmake_minimum_required(VERSION 2.6)
project(hugworks)

set(Gl_VERSION_MAJOR 1)
set(Gl_VERSION_MINOR 0)


if(UNIX)
	#set(CMAKE_CXX_FLAGS "-Wall -std=c++0x -pedantic -O2 -g -pg")
	#set(CMAKE_CXX_FLAGS "-Wall -Wstrict-aliasing -std=c++0x -O2")

	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++11")

	# valgrind --leak-check=full ./demo
	# ./demo # creates cmon.out
	# gprof demo gmon.out > analysis.txt
	#set(CMAKE_CXX_FLAGS "-Wall -pg -std=c++11")
endif(UNIX)

if(WIN32)
	# On Visual 2005 and above, this module can set the debug working directory
	list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/external/rpavlik-cmake-modules-1c73e35")
	include(CreateLaunchers)
	include(MSVCMultipleProcessCompile) # /MP

	if(MINGW)
		set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
	ELSE(MINGW)
		add_definitions( "/W3 /D_CRT_SECURE_NO_WARNINGS /wd4514 /nologo" ) # suppress pedantic warnings
	endif(MINGW)
endif(WIN32)

find_package(SDL2 REQUIRED)

add_subdirectory(external)

include_directories(
  ${CMAKE_SOURCE_DIR}/external/SDL2-2.0.4/include/
  ${CMAKE_SOURCE_DIR}/hugworks/
  ${CMAKE_SOURCE_DIR}/.
)

set(ALL_LIBS
	engine
	SDL2
)

include_directories(
  /external/SDL2-2.0.4/include
  /external/
)

add_definitions(
	-DTW_STATIC
	-DTW_NO_LIB_PRAGMA
	-DTW_NO_DIRECT3D
	-DGLEW_STATIC
	-D_CRT_SECURE_NO_WARNINGS
)
include_directories(${SDL2_INCLUDE_DIRS} ${PROJECT_BINARY_DIR})
add_library(hugworks
	hugworks/entity.cpp
	hugworks/entity.h
	hugworks/scene.cpp
	hugworks/scene.h
	hugworks/input.cpp
	hugworks/input.h
	hugworks/vector2.cpp
	hugworks/vector2.h
)
add_executable(game
game/main.cpp
game/main.h
game/enemy.cpp
game/enemy.h

)


target_link_libraries(hugworks ${ALL_LIBS})
