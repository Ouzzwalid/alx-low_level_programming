#include "main.h"
/**
 * print_rev - print a string in reverse
 *
 *@s: the string to be printed
 *
 *
 *
 *
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
	}
	while (i > 0)
	{
		_putchar(*(s + (i - 1)));
	       i--;
	}
	_putchar('\n');
}
