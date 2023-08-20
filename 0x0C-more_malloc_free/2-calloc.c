#include "main.h"
#include <stdlib.h>
/**
 *_calloc - allocates memory for anarray of elements
 *
 *@nmemb: elements of the array
 *@size: Size of each element
 *Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	for (i = 0; i < size * nmemb; i++)
		mem[i] = 0;
	return ((void *)mem);
}
