#include <stdio.h>

/**
 * main -Entry Point
 *
 * Description: This func prints single digit numbers separated by comma
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 8; i++)
	{
		printf("%d, ", i);
	}
	printf("%d", 9);
	printf("\n");
	return (0);
}
