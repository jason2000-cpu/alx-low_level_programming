#include "function_pointers.h"
/*
 * print_name - Entry Level
 * @name: name to be printed
 * @f: the name is printed according to this function
 * Return: returns nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
