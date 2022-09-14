#include <stdio.h>
#include "main.h"

/**
 * _islower -Entry Point
 *
 * Description: This func prints alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r = _islower('H');
	
	putchar(r + '0');
	return (0);
}

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
