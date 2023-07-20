#include "main.h"
/**
 *print_diagonal - function that draws a diagonal line on the terminal.
 *
 *@n: number of times to draw '\'
 *
 *
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			j = 0;
			while (j < n)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n')
}
