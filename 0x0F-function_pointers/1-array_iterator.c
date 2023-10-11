#include "function_pointers.h"
/**
 *array_iterator - executes a given function to each element of an array
 *
 *@array: pointer to the array
 *@size: the size of the array
 *@action: pointer to a function that returns nothing and requires an int
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && size > 0 && action != NULL)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
			action(array[i]);
	}

}
