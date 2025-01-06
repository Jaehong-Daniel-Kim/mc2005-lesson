cmake_minimum_required(VERSION 3.10)

project(MerkelAPP)

set(CMAKE_CXX_STANDARD 11)  # For C++11
set(CMAKE_CXX_STANDARD_REQUIRED YES)  # Ensure the C++11 standard is used

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -g --std=c++11")

add_executable(MerkelApp main.cpp MerkelMain.cpp OrderBookEntry.cpp CSVReader.cpp OrderBook.cpp)