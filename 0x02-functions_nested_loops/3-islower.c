#include <stdio.h>
#include "main.h"

/**
 * _islower -Entry Point
 *
 * Description: This func prints alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */

int test_islower(int c)
{
	int res;

	res = test_islower(c);
	putchar(res + '0');
	putchar('\n');
}

/**
 * main -Entry point
 * Description: The function calls the _islower function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	test_islower('H');
	return (0);
}
