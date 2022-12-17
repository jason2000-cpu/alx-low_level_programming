#include <stdio.h>
#include "main.h"

/**
 * _abs - computes absolute value of integer
 *@n: int is an integer
 *
 * Return: Absolute value of integer
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (0);
	}
}
