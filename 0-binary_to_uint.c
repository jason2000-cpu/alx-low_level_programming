#include <stdio.h>

/*
 * binary_to_uint- Entry level
 *
 * Description: this function converts binary number to unsigned int
 *
 * @b: binary number to convert
 *
 * Return: returns the converted numbber
 */

unsigned int binary_to_uint(const char *b)
{
	int binDigit = &b, base = 1, rem = 0, decNum;

	for (i = 0; binDigit > 0 ; i++)
	{
		rem = binDigit % 10;
		decNumb = decNum + rem*base;
		base = base * 2;
		binDigit = binDigit/10;
	}
	return decNum;
}
