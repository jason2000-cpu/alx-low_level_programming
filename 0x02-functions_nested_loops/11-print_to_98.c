#include <stdio.h>
/**
* print_to_98- Entry point
* Description: Print natural numbers to nth number
*
* @n: number to print to
*
* Return: Always 0 (Success)
*/
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 97; i++)
		{
			printf("%d,\n", i);
		}
		printf("%d\n", 98);
	} else if (n > 98)
	{
		for (i = n - 1; i >= 98; i--)
		{
			printf("%d,\n", i);
		}
		printf("%d\n", 98);
	} else
	{
		printf("%d\n", n);
	}
}
