# 0x0C-more_malloc_free

###### This directory contains task files for my alx project **0x0C-more_malloc_free**. The topic of this project is Memory Management. A few things about malloc and free:
###### The malloc function is used to allocate a certain amount of memory during the execution of a program. It will request a block of memory from the heap. If the request is granted, the operating system will reserve the requested amount of memory and malloc will return a pointer to the reserved space.
###### When the amount of memory is not needed anymore, you must return it to the operating system by calling the function free.

**Prerequisite**

- To run the programs compile the c files using ***gcc***, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

**Usage**

- Running scripts, Ex. Create and export a C file `julien@ubuntu:~/c/0x00$ export CFILE=main.c` then run the executable `julien@ubuntu:~/c/0x00$ ./0-preprocessor `
- Compiling C files, Ex. `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c`

**Files**

- `0-malloc_checked.c` : a function that allocates memory using malloc. The function returns a pointer to the allocated memory. If malloc fails, the malloc_checked function will cause normal process termination with a status value of 98.
- `1-string_nconcat.c` : a function that concatenates two strings. The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated. If the function fails, it will return NULL. If n is greater or equal to the length of s2 then the entire string s2 will be used, if NULL is passed, it will be treated as an empty string.
- `2-calloc.c` : a function that allocates memory for an array, using malloc. The _calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory. The memory is set to zero. If nmemb or size is 0, then _calloc will return NULL, If malloc fails, then _calloc will return NULL.
- `3-array_range.c` : a function that creates an array of integers. The array created shall contain all the values from min (included) to max (included), ordered from min to max. Return: the pointer to the newly created array. If min > max, it shall return NULL, If malloc fails, it will return NULL.
- `100-realloc.c` : a function that reallocates a memory block using malloc and free. Prototype: `void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);` in the function prototype ptr is a pointer to the memory previously allocated with a call to malloc: malloc(old_size), old_size is the size, in bytes, of the allocated space for ptr and new_size is the new size, in bytes of the new memory block. The contents will be copied to the newly allocated space, in the range from the start of ptr up to the minimum of the old and new sizes. If new_size > old_size, the “added” memory shall not be initialized. If new_size == old_size the function shall return ptr. If ptr is NULL, then the call is equivalent to malloc(new_size), for all values of old_size and new_size. If new_size is equal to zero, and ptr is not NULL, then the call is equivalent to free(ptr). It shall return NULL.
- `101-mul.c` :  a program that multiplies two positive numbers. `Usage: mul num1 num2`. num1 and num2 will be passed in base 10. If the number of arguments is incorrect, it will print Error, followed by a new line, and exit with a status of 98. num1 and num2 shall only be composed of digits, if not, it will print Error, followed by a new line, and exit with a status of 98.
