#!bin/bash
gcc -c -Wall -Werror -fPIC *.c
gcc -g -fPIC -Wall -Werror -Wextra -pedantic *.c -shared -o liball.so
