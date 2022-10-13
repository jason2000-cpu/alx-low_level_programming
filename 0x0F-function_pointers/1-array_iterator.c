#include "function_headers.h"
 /*
  * arrat_iterator - Entry Level
  * Description: This function executes a function to all elemens of an array
  * @array: The  array to use
  * @size: size of the array
  * @action: a function with action to perform to all elements of the array
  * Return : returns nothing
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action && array)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
