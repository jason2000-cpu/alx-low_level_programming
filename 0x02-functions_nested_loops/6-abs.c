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

int _abs(int n)
{
	if( n < 0)
	{
		n = (n*2) + n;
		putchar(n + '0');
	} else 
	{
		putchar(n + '0');
	}
	return (0);
}
