# CMakeList.txt : CMake project for neuralviz, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project ("neuralviz")

# Add source to this project's executable.
add_executable (neuralviz "src/neuralviz.cpp")

# TODO: Add tests and install targets if needed.
