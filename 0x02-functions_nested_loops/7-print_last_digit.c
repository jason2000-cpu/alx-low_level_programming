#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* print_last_digit- Entry point
* Description: Print the last digit of a number
*
* Return: Always 0 (Success)
*/
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	putchar(last_digit + '0');
	return (last_digit);
}
