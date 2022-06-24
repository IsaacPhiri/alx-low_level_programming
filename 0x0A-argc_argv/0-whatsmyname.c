#include <stdio.h>

/**
 * main - a program that prints it's name
 * @argc: argument count
 * @argv: argument vector - a pointer to an array
 *
 * Return: Always 0.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
