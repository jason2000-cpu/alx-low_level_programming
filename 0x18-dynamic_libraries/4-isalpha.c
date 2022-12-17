#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 *
 *@c: ascii character
 *
 * Return: 1 if a letter (lowercase or uppercase)
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
