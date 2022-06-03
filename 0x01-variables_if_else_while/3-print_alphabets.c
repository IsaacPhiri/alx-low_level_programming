#include <stdio.h>

/**
 * main - functon to print the alphabets using putchar.
 *
 * ch: char var1
 * Return: 0
 */

int main(void)
{
	int ch;
	int c;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	printf("\n");

return (0);
}
