#include "main.h"
/**
 * print_last_digit -  prints the last digit of a number.
 *
 * @n : The input number is an integer
 *
 * Return: then last digit of the given number
 *
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		_putchar(-last + 49);
		return (-last);
	}
	else
	{
		_putchar(last + 49);
		return (last);
	}
}
