#include <stdlib.h>
#include <stdio.h>

/*
 * main - Entry point
 * @argc: arguments count 
 * @argv: arguments array
 * Return: returns 0 Always (success)
 */

int main(int argc, char* argv[])
{
	int mul;

	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
