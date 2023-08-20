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
	if (malloc(b) == NULL)
		exit (98);
	return (malloc(b));
}
