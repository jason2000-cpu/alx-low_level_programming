#include <stdio.h>

/**
 * print_alphabet_x10 -Entry Point
 *
 * Description: This func prints alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */

int print_alphabet_x10(void)
{
	char a;
	int  i;


	for (i = 0; i < 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			putchar(a);
		}
		putchar('\n');
	}
	return (0);
}
