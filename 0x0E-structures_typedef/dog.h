#ifndef _DOG_H_
#define _DOG_H_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - my struct do data type.
 * @name: pointer to a char.
 * @age: variable to store flaot data type.
 * @owner: pointer to a char.
 *
 * Description: my struct data type with 3 elements.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* _DOG_H_ */
