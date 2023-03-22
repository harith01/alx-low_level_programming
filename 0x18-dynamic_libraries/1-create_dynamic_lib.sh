#!/bin/bash
gcc -fpic -c *.c
gcc -fpic *.o -shared liball.so
