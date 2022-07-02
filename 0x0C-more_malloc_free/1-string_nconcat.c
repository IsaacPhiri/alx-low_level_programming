#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: pointer to the block of memory to copy
 * @s2: pointer to block being copied from
 * @n: number of bytes to copy from s2
 *
 * Return: NULL if function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int len, len_s1, len_s2, i, j, x;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
		;
	for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
		;
	len = len_s1 + n;
	s3 = (char *)malloc(sizeof(char) * (len + 1));
	if (s3 == NULL)
		return (NULL);
	for (j = 0; s1[j] != '\0'; j++)
	{
		s3[j] = s1[j];
	}
	if (n >= len_s2)
	{
		x = 0;

		while (s2[x] != '\0')
		{
			s3[len_s1 + 1] = s2[x];
			x++;
			len_s1++;
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			s3[len_s1] = s2[i];
			len_s1++;
		}
	}
	s3[len] = '\0';
	return (s3);
}
