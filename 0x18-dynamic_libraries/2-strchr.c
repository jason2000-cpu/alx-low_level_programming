#include "main.h"
#include <stdlib.h>

/**
 * _strchr - locates a character in a string
 * @s: string of teh characters
 * @c: character in the string to be located
 *
 * Return: null if not found andc if found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (0);
}
