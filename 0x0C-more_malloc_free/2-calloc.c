#include "main.h"
#include <stdlib.h>
/**
 *
 *
 *
 *
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int i;

	if (nmemb == 0 || size ==0)
		return (NULL);
	mem = malloc (nmemb * size);
	if (mem == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		mem[i] = 0;
	return ((void *)mem);
}
