#!/bin/bash
gcc -fPIC -c 100-thec.c
gcc -shared -fPIC -o 100-operations.so 100-thec.o
