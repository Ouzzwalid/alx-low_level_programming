#include "function_pointers.h"
/**
 *int_index - Search for an indew that matches to a function return
 *
 *@array: pointer to array
 *@size: the size of the array
 *@cmp: pointer to function to be executed to array elements
 *
 *Return: index of the first element for which the function doesn't return 0
 * -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0 && array != NULL && cmp != NULL)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
		return (-1);
	}
	return (-1);
}
