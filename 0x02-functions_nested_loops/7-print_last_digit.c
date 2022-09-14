#include <stdlib.h>
#include "main.h"
#include "6-abs.c"
/**
* print_last_digit- Entry point
* Description: Print the last digit of a number
* @n: number to check last digit
* Return: Always 0 (Success)
*/
int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
