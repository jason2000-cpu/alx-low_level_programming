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
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			if (i == j)
			{
				j++;
			} else if ( i+j == i)
			{
				j++;
			}
			printf("%i%i,", i,j);
		}
	};
	printf("\n");
	return (0);
}
