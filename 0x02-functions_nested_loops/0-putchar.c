#include <stdio.h>

/**
 * main - prints _putchar followed by a newline.
 *
 * Reaturn: always zero (SUCCESS)
 */

int main(void)
{
	char string[] = "_putchar";
	int i = 0;

	while (string[i] != '\0')
	{
		putchar(string[i]);
		i++;
		if (string[i] == '\0')
		{
			putchar('\n');
		}
	}

	return (0);
}
