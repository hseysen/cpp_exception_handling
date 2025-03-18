cmake_minimum_required(VERSION 3.10)
project(dev LANGUAGES CXX)

# Use CMake Standard 17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Folder for the executables for ease of use
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

include_directories(include)

# Algorithm examples
add_executable(electrical_circuit       programs/ElectricalCircuit.cpp  src/VoltageSource.cpp src/ElectronicComponent.cpp)
