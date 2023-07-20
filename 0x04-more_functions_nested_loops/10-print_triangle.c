#include "main.h"
/**
 *print_triangle - function that prints a triangle, followed by a new line.
 *
 *@size: The size of the triangle (Integer)
 *
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - i; j > 1; j--)
				_putchar(' ');
			for (k = i + j; k > 0; k--)
				_putchar('#');
		}
	}
	else
		_putchar('\n');
}
