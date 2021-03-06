#!/bin/sh

gcc -c main.cpp
gcc -c Birthday.cpp
gcc -c People.cpp

mkdir exes

g++ main.o Birthday.o People.o \
 -o exes/run.exe

./exes/run.exe
cd ..




