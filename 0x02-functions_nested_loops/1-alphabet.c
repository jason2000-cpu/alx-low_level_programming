#include <stdio.h>

/**
 * main -Entry Point
 *
 * Description: This func prints alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */

int print_alphabet_x10(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
