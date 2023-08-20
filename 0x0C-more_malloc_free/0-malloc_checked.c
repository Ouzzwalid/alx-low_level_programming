#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - allocates memory using malloc
 *@b: the size of memory to be allocated
 *
 * Return: pointer to the allocated memory (Success)
 * exit(98)(fail)
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit (98);
	return (p);
}
