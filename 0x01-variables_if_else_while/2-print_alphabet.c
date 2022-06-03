#include <stdio.h>
#include <stdlib.h>
/**
 * main - functon to print the alphabet using putchar.
 *
 * ch: char var1
 * Return: 0
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	printf("\n");

return (0);
}
