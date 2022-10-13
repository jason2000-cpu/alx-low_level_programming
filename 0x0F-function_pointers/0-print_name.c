#include <stdlib.h>
#include <stdio.h>
/*
 * print_name - Entry Level
 *
 * Description: this function prints a name
 * 
 * Return: returns nothing
 */

void print_name(char *name, void (*f)(char *))
{
	printf("%c\n", name);
}
