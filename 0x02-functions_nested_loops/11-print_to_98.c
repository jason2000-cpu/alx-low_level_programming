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

	for (i = 0 ; i <= n; i++)
	{
		printf("%d,\n", i);
	}
}
