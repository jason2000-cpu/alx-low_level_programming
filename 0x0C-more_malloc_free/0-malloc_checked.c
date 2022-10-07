#include <stdlib.h>

/*
 * malloc_checked- entry level
 *
 * @b: interger value to allocate memory
 *
 * Return: returns pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *s = malloc(b);

	if (s == NULL)
		exit(98);
	return (s);
}
