#include <stdio.h>
#include "main.h"

/**
 * _islower -checks lowercase
 *
 * @c: c is ascii character
 *
 * Return: 1 if lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else

	{
		return (0);
	}
}
