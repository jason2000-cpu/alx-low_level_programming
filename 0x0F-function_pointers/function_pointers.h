#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
<<<<<<< HEAD
int int_index(int *array, int size, int (*cmp)(int));
=======
>>>>>>> 69a816e216c12295fc9259400cf38a56dc81a2b3
#endif
