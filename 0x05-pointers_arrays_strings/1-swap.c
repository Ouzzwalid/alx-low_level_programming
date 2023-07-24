#include "main.h"
/**
 *swap_int - swap the values of 2 integers
 *
 *@a: the pointer to the first integer
 *
 *@b: the pointer top the second integer
 *
 *
 *
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}

