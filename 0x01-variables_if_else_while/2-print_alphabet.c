#include <stdio.h>
/*
* main- Entry point
* Description: This func print alphabets in lowercase
* Return: Always 0 (Success)
*/
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
