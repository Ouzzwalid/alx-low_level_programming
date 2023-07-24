#include <stdio.h>
#include "main.h"
/**
 *print_array - function that prints n elements of an array of integers.
 *
 *@a: The array
 *@n: the number of elements of the array
 *
 *
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if  (i < (n - 1))
			printf(", ");
		i++;
	}
	printf("\n");
}
