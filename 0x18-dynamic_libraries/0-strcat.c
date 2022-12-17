#include "main.h"

/**
 * _strcat - concatenates twp strings
 *@dest: a string appended to
 *@src: a string to be concatenated
 *
 * Return: returns to dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
