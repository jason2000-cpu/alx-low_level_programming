#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to be searched
 * @accept: string to be checked too
 *
 * Return: returns to s if matching and NULL if not
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}

		s++;
	}
	return ('\0');
}
