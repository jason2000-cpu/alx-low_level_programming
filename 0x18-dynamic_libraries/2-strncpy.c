#include "main.h"

/**
 * _strncpy - C function that copies a string
 * @dest: buffer storing the string copy
 * @src:the source string
 * @n: integer to be copied
 *
 * Return: Always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
