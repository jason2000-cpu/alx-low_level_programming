#include <stdio.h>
#include "main.h"

/**
 * _islower -Entry Point
 *
 * Description: This func prints alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */

void _islower(int c)
{
	int res;

	res = _islower(c);
	_putchar(res + '0');
	_putchar('\n');
}

/**
 * main -Entry point
 * Description: The function calls the _islower function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	_islower('H');
	return (0);
}
