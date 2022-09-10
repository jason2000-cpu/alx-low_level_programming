#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints base 16 numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + '0');
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
