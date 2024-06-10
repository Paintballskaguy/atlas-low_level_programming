#!/bin/bash

# Create object files from all .c files.
gcc -c *.c*

#creates the library from .o files
ar rcs liball.a *.o*

#clean up .o
rm *.o*