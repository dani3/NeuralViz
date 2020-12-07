# CMakeList.txt : CMake project for neuralviz, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project ("neuralviz")

# Add source to this project's executable.
add_executable (neuralviz "src/Main.cpp" "src/swc/SwcReader.h" "src/swc/SwcReader.cpp")

# Dependencies
find_package(spdlog REQUIRED)

target_link_libraries(neuralviz PRIVATE spdlog::spdlog)
