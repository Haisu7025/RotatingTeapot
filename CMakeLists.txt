cmake_minimum_required(VERSION 3.9)
project(teapot)

set(CMAKE_CXX_STANDARD 11)
find_package(OpenGL REQUIRED)
include_directories(${OPENGL_INCLUDE_DIR})

find_package(GLUT REQUIRED)
include_directories(${GLUT_INCLUDE_DIR})
add_executable(teapot bzlteapot.cpp ctrlpoints.h teapot.h)

target_link_libraries(teapot ${GLUT_LIBRARY} ${OPENGL_LIBRARY})