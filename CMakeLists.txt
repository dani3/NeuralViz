# CMakeList.txt : CMake project for NeuralViz, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Defines
add_compile_definitions(ENABLE_ASSERTS)

# Include directories
include_directories("src/")

project ("NeuralViz")

# Add source to this project's executable.
add_executable (neuralviz "src/Main.cpp" "src/SWC/SwcReader.h" "src/SWC/SwcReader.cpp" "src/Core/Log.cpp" "src/Core/Log.h" "src/Core/Core.h" "src/Morpho/Morphology.cpp" "src/Morpho/Morphology.h" "src/Morpho/Neuron.cpp" "src/Morpho/Neuron.h" "src/Morpho/Node.cpp" "src/Morpho/Node.h" "src/Utils/Vec3.h" )

# Dependencies
find_package(spdlog REQUIRED)

target_link_libraries(neuralviz PRIVATE spdlog::spdlog)
