# 0x0B-malloc_free

###### This directory contains task files for my alx project **0x0B-malloc_free**. The topic of this project is Memory Allocation. A few things about malloc and free:
###### The malloc function is used to allocate a certain amount of memory during the execution of a program. It will request a block of memory from the heap. If the request is granted, the operating system will reserve the requested amount of memory and malloc will return a pointer to the reserved space.
###### When the amount of memory is not needed anymore, you must return it to the operating system by calling the function free.

**Prerequisite**

- To run the programs compile the c files using ***gcc***, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

**Usage**

- Running scripts, Ex. Create and export a C file `julien@ubuntu:~/c/0x00$ export CFILE=main.c` then run the executable `julien@ubuntu:~/c/0x00$ ./0-preprocessor `
- Compiling C files, Ex. `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c`

**Files**

- `0-create_array.c` : a function that creates an array of chars, and initializes it with a specific char.
- `1-strdup.c` : a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
- `2-str_concat.c` :  a function that concatenates two strings. The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated. if NULL is passed, it'll be treated as an empty string. The function returns NULL on failure.
- `3-alloc_grid.c` : a function that returns a pointer to a 2 dimensional array of integers. Each element of the grid is initialized to 0. The function returns NULL on failure. If width or height is 0 or negative, it returns NULL.
- `4-free_grid.c` : a function that frees a 2 dimensional grid previously created by your alloc_grid function. On compilation it will be compiled with the alloc_grid.c file.
- `100-argstostr.c` : a function that concatenates all the arguments of your program. Returns NULL if ac == 0 or av == NULL. The function returns a pointer to a new string, or NULL if it fails. Each argument is followed by a \n in the new string.
- `101-strtow.c` : a function that splits a string into words. The function returns a pointer to an array of strings (words). Each element of this array will contain a single word, null-terminated. The last element of the returned array will be NULL. Words are separated by spaces. It returns NULL if str == NULL or str == "". If the function fails, it returns NULL.
