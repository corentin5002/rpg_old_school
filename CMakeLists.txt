cmake_minimum_required(VERSION 3.16)

project(MonRPG)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include_directories(${CMAKE_SOURCE_DIR}/include)

set(SOURCES
    src/main.cpp
    src/classes/Joueur.cpp
    src/classes/Personnage.cpp
    src/classes/Ennemi.cpp
    src/classes/Potion.cpp
    src/classes/Arme.cpp
    src/classes/Armure.cpp
)

add_executable(MonRPG ${SOURCES})
