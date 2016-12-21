# DO NOT USE IT IN WINDOWS
cmake_minimum_required(VERSION 3.3)
project(zsbeamer)

INCLUDE(./cmake/UseLATEX.cmake)

add_latex_document(./src/zsbeamer.tex)