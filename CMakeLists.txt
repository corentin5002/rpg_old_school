cmake_minimum_required(VERSION 3.16)

project(MonRPG)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include_directories(${CMAKE_SOURCE_DIR}/include)

set(SOURCES
    src/main.cpp
    src/Joueur.cpp
    src/Personnage.cpp
    src/Ennemi.cpp
    src/Potion.cpp
    src/Arme.cpp
    src/Armure.cpp
)

add_executable(MonRPG ${SOURCES})
