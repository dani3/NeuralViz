# CMakeList.txt : CMake project for neuralviz, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("neuralviz")

# Add source to this project's executable.
add_executable (neuralviz "src/neuralviz.cpp" "src/neuralviz.h")

# TODO: Add tests and install targets if needed.
