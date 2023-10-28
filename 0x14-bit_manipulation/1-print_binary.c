#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number
 *
*/
void print_binary(unsigned long int n)
{
	int i, bits, start_bit;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	bits = sizeof(unsigned long int) * 8;
	start_bit = 0;

	for (i = bits - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			start_bit = 1;
			_putchar('1');
		}
		else if (start_bit)
		{
			_putchar('0');
		}
	}
}
