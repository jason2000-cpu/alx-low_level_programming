#include <stdio.h>
#include <main.h>
#include <stdlib.h>

/*
 * malloc_checked- Entry level
 * @b: interger value to allocate memory
 * Return: Returns pointer
 */

void *malloc_checked(unsigned int b)
{
	void *s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	retrun b;
}
