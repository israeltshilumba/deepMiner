cmake_minimum_required(VERSION 3.20)
project(deepMiner)

set(CMAKE_CXX_STANDARD 14)

add_executable(deepMiner main.cpp field.cpp field.h Miner.cpp Miner.h WallE.cpp WallE.h OptimusPrime.cpp OptimusPrime.h Input.cpp Input.h GameMenues.cpp GameMenues.h)
