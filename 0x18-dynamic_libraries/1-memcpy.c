#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination of teh copied memory
 * @src: area where memory is copied from
 * @n: number of bytes opied
 *
 * Return: returns pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
