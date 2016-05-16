cmake_minimum_required (VERSION 2.8)
set (CMAKE_CXX_STANDARD 14)
project(linux_test)

file(GLOB_RECURSE proj_src
	"src/*.hpp"
	"src/*.cpp"
)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/build")
#set(SFML_STATIC_LIBRARIES TRUE)
find_package(SFML COMPONENTS graphics window system REQUIRED)
include_directories(${SFML_INCLUDE_DIR})
add_executable(linux_test ${proj_src})
target_link_libraries(linux_test ${SFML_LIBRARIES})
