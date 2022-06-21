#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;

	while (*(s + 1))
	{
		j = 0;

		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j))
			{
				break; /*Found a match*/
			}
			j++;
		}
		if (!*(accept + j))
		{
			return i; /*No match found*/
		}
		i++;
	}
	return i;
}
