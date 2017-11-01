cmake_minimum_required(VERSION 3.8)
project(pool)

set(CMAKE_CXX_STANDARD 98)

set(SOURCE_FILES main.cpp Pony.cpp Pony.hpp Zombie.cpp Zombie.hpp ZombieEvent.cpp ZombieEvent.hpp)
add_executable(pool ${SOURCE_FILES})