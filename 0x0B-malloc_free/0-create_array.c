#include "main.h"
#include <stdlib.h>
/**
 *create_array - creates an array of chars, and initializes it with a specific char.
 *
 *@size: size of array
 *@c: The character to be initialized with
 *
 *Return: NULL if size is 0 
 *the pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char* arr;

	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(c));
	if (arr == NULL )
		return (NULL);
	for (; i < size; i++)
		*(arr + i) = c;
	return (arr);
		
}
