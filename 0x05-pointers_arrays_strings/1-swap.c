#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: pointer to an int param1
 * @b: pointer to an int param2
 */

void swap_int(int *a, int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}
