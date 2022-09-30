#include <stdio.h>

/*
 * main - Entry point
 * @argc: arguments count 
 * @argv: arguments array
 * Return: returns 0 Always (success)
 */

int main(int argc, char* argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
