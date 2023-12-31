#include "main.h"
/**
 * print_times_table - Prints the n times table
 *
 *@n: number times (shoulde be between 0 and 15)
 *
 *Return : no return
 *
 */
void print_times_table(int n)
{
	int i, j, result;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (j = 1; j <= n; j++)
			{
				result = i * j;
				_putchar(44);
				_putchar(32);
				if (result <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(result + 48);
				}
				else if (result <= 99)
				{
					_putchar(32);
					_putchar((result / 10) + 48);
					_putchar((result % 10) + 48);
				}
				else
				{
					_putchar(((result / 100) % 10) + 48);
					_putchar(((result / 10) % 10) + 48);
					_putchar((result % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
