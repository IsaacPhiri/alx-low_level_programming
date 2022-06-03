#include <stdio.h>

/**
 * main - functon to print the alphabet except q and e using putchar.
 *
 * ch: char var1
 * Return: 0
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
		{
			continue;
		}
		else
		{
			putchar(ch);
		}
	}
	printf("\n");

return (0);
}
