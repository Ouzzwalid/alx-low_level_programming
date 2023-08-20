#include "main.h"
#include <stdlib.h>
/**
 *array_range - create an array of integers ordered from min to max
 *@min: the minimum
 *@max: the maximum
 *
 *Return: pointer to the created array
 *
 */
int *array_range(int min, int max)
{
	int *pt;
	int i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	pt = malloc(sizeof(int) * size);
	if (pt == NULL)
		return (NULL);
	i = 0;
	while (i < size && min <= max)
	{
		pt[i] = min;
		i++;
		min++;
	}
	return (pt);
}
