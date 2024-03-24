cmake_minimum_required(VERSION 3.10)
project(ChessEngine)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)


set(SOURCES
    chess-engine/main.cpp
    chess-engine/board.cpp
)

add_executable(ChessEngine ${SOURCES})
