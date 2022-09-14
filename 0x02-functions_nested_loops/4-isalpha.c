#include <stdio.h>
#include "main.h"

/**
 * _isalpha -Entry Point
 *
 * Description: This func checks if param is alphabet
 *
 * @c: parameter to check
 *
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
