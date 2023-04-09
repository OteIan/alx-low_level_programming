#!/bin/bash
c_files=( *.c )
for c_file in "${c_files[@]}"; do
    gcc -c "$c_file"
done
ar rcs liball.a *.c
rm *.o
