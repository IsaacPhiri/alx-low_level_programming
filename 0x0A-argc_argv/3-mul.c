#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: argument count.
 * @argv: a pointer to an array.
 *
 * Return: Return 0 if SUCCESS, else print Error and Return 1.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int mul;
	int a, b;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		mul = a * b;

		printf("%d\n", mul);
	}
	return (0);
}
