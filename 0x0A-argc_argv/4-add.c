#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers.
 * @argc: argument count
 * @argv: pointer to an array
 *
 * Return: Return 1 if SUCCESS, else print Error and Return 1.
 */

int main(int argc, char *argv[])
{
	int sum, count;
	
	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			if (atoi(argv[count]) > '9' || atoi(argv[count]) < '0')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[count]);
			}
		}

		printf("%d\n", sum);
	}

	return (0);
}
