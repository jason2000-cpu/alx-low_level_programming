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

void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i <= 23; i++)
	{
		for(j = 0; j <= 59; j++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar('\n');
		}
	}
}
