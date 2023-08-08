#include "main.h"
#include <stdlib.h>
/**
 *
 *
 *
 *
 *
 *
 *
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
