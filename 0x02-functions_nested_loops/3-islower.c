#include <stdio.h>
#include "main.h"

/**
 * _islower -Entry Point
 *
 * Description: This func prints alphabets in lowercase
 *
 *@c: parameter to check

 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
