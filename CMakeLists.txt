cmake_minimum_required(VERSION 3.20)
project(deepMiner)

set(CMAKE_CXX_STANDARD 14)

add_executable(deepMiner main.cpp field.cpp field.h Miner.cpp Miner.h Michelangelo.cpp Michelangelo.h Raphael.cpp Raphael.h Input.cpp Input.h GameMenues.cpp GameMenues.h Game.cpp Game.h)
