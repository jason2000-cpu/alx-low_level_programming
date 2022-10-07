#include <stdio.h>
#include <main.h>

/*
 * malloc_checked- Entry level
 * @b: interger value to allocate memory
 * Return: Returns pointer
 */

void *malloc_checked(unsigned int b)
{
	b = malloc(sizeof(b));
	if (b == NULL)
	{
		return 98;
	}
	retrun b;
}
