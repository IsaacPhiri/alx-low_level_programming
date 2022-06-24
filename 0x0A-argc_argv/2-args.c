#include <stdio.h>

/**
 * main - a program that prints all arguments it recieves.
 * @argc: argument count.
 * @argv: pointer to an array.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}

	return (0);
}
