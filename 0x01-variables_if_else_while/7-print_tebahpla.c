#include <stdio.h>
#include <stdlib.h>
/**
 * main - functon to print the alphabet in reverse using putchar.
 *
 * ch: char var1
 * Return: 0
 */

int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar(10);

return (0);
}
