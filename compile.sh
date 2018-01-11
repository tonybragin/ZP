#!/bin/sh

clang -o brain.o -c ./brain.c
clang -o show.o -c ./show.c
clang -o inter.o -c ./inter.c
clang -o work.o -c ./work.c
clang -o ZP ./main.c ./brain.c ./show.c ./inter.c ./work.c