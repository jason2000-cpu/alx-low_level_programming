#include <stdio.h>

/**
 * main -Entry Point
 *
 * Description: This func prints alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'e' || a == 'q')
		{
			a++;
		}
		putchar(a);
	}
	putchar('\n');
	return (0);
}
