#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13.
 * @s: param
 *
 * Return: Pointer to a string
 */

char *rot13(char *s)
{
	/*Declare a variable that will iterate the string*/
	int i, j;

	/*Declare 2 char pointer arrays to hold the alphabet.*/
	char *a = "aAbBcCdDeEfFgGhHiIjJkKlLmM";
	char *b = "nNoOpPqQrRsStTuUvVwWxXyYzZ";

	/*Use a for loop to iterate the string*/
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 26; j++)
		{
			/*Use an if statement to check if the character is a letter*/
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
