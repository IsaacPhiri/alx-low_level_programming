# 0x0E-structures_typedef

##### A struct in the C programming language (and many derivatives) is a composite data type (or record) declaration that defines a physically grouped list of variables under one name in a block of memory, allowing the different variables to be accessed via a single pointer or by the struct declared name which returns the same address. The struct data type can contain other data types so is used for mixed-data-type records such as a hard-drive directory entry (file length, name, extension, physical address, etc.), or other mixed-type records (name, address, telephone, balance, etc.). - WIKIPEDIA

##### Although typedef is thought of as being a storage class, it isn't really. It allows you to introduce synonyms for types which could have been declared some other way. The new name becomes equivalent to the type that you wanted, as this example shows. - GBDIRECT
```
typedef int aaa, bbb, ccc;
typedef int ar[15], arr[9][6];
typedef char c, *cp, carr[100];
```
#### This directory is centered around structure and typedef.

## Files

0. `dog.h`
- Defines a new type struct dog with the following elements:
```
name, type = char *
age, type = float
owner, type = char *
```
- Defines a new type dog_t as a new name for the type struct dog.

1. `1-init_dog.c` : a function that initialize a variable of type struct dog.

2. `2-print_dog.c` : a function that prints a struct dog
- Prototype: void print_dog(struct dog *d);
- If an element of d is NULL, it prints (nil) instead of this element. (if name is NULL, it prints Name: (nil))
- If d is NULL it prints nothing.

4.`4-new_dog.c` : a function that creates a new dog.
- Prototype: `dog_t *new_dog(char *name, float age, char *owner);`
- Returns NULL when the function fails

5. `5-free_dog.c` : a function that frees dogs.
- Prototype: `void free_dog(dog_t *d);`
