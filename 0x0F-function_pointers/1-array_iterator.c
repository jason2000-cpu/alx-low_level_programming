<<<<<<< HEAD
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: The array
 * @size: The size of the array
 * @action: The action to be performed on the array
 * Return: nothing
 */
=======
#include "function_headers.h"
 /*
  * arrat_iterator - Entry Level
  * Description: This function executes a function to all elemens of an array
  * @array: The  array to use
  * @size: size of the array
  * @action: a function with action to perform to all elements of the array
  * Return : returns nothing
  */

>>>>>>> 69a816e216c12295fc9259400cf38a56dc81a2b3
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

<<<<<<< HEAD
	if (array && action)
=======
	if (action && array)
>>>>>>> 69a816e216c12295fc9259400cf38a56dc81a2b3
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
