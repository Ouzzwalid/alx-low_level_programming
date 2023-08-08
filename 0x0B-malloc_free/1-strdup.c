#include <stdlib.h>
#include "main.h"
/**
 *
 *
 *
 *
 *
 */
char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *cpy;

	if (str == NULL)
		return (NULL);
	while (*(str + size) != '\0')
		size++;
	cpy = malloc(size * sizeof(*str));
	if (cpy == NULL)
		return (NULL);
	for (;i < size; i++)
		cpy[i] = str[i];
	return (cpy);
}
