#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13.
 * @s: param
 *
 * Return: Pointer to a string
 */

char *rot13(char *s)
{
	int i, j;

	char a[] = "aAbBcCdDeEfFgGhHiIjJkKlLmM";
	char b[] = "nNoOpPqQrRsStTuUvVwWxXyYzZ";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
			else if (s[i] == b[j])
			{
				s[i] = a[j];
			}
			else
			{
				s[i] = s[i];
			}
		}
	}

	return (s);
}
