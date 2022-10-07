#include <stdlib.h>

/*
 * malloc_checked- Entry level
 *
 * @b: interger value to allocate memory
 *
 * Return: Returns pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
