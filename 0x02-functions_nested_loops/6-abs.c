#include <stdio.h>
#include "main.h"

/**
 * print_sign -Entry Point
 *
 * Description: This func prints the sign of a param
 *
 * @n: parameter to check
 *
 * Return: either 1, 0 or -1
 */

int print_sign(int n)
{
	if( n < 0)
	{
		putchar((n +(n*2)) + '0');
	}
	putchar(n + '0')
	return (0);
}
