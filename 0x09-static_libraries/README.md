# 0x09. C - Static libraries

- `main.h` header file that contains all function prototypes.
- `libmy.a` static library that contains all the functions in the folder `lib_functions`.
- `main.c` tests the functions included in libmy.a
- `./functions` contains the implementaion of all functions in libmy library.
- `create_static_lib` bash script that compile the code (\*.c) into object files (\*.o) without linking then use the archiver program to create a static library called `liball.a` and put copies of the object files (\*.o) into it.
the flag 'c' tells the archiver program to create if not exist, the 'r' tells ar to replace existing objects and finally the 's' flag tells ar to index, this helps speed symbol-lookup inside the library.
