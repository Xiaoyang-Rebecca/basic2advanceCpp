#!/bin/sh

gcc -c main.cpp
gcc -c Mother.cpp
gcc -c Daughter.cpp

mkdir exes

g++ main.o Mother.o Daughter.o \
 -o exes/run.exe

./exes/run.exe
cd ..




