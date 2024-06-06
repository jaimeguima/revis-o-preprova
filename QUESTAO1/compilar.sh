#!/bin/bash
#  source ./compilar.sh

cd core/
g++ -c *.cpp 
cd ..
g++ main.cpp core//*.o