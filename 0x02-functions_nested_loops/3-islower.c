#include <stdio.h>

/**
 * _islower -Entry Point
 *
 * Description: This func prints alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (putchar(a) == c){
			return (1);
		} else 
		{
			return (0);
		}
	}
	return (0);
}
