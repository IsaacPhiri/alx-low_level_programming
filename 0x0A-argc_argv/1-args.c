#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: argument count.
 * @argv: a pointer to an array
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int count;

	for (count = 0; count < argc; count++);
	count--;
	printf("%d\n", count);

	return (0);
}
