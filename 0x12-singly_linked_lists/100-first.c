#include <stdio.h>

void first() __attribute__ ((constructor));

/**
 * first - prints a srting before main is executed.
 *
 */

void first()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
