#include "function_pointers.h"
<<<<<<< HEAD
/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: name is printed according to this function
 * Return: nothing
=======
/*
 * print_name - Entry Level
 * @name: name to be printed
 * @f: the name is printed according to this function
 * Return: returns nothing
>>>>>>> 69a816e216c12295fc9259400cf38a56dc81a2b3
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
