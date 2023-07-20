#include "main.h"
/**
 *print_numbers - print numbers from 0 to 9 followed by a new line
 *
 *
 *Return: No return
 *
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + 48);
	_putchar('\n');
}
