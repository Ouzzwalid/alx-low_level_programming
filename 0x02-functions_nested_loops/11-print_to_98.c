#include <stdio.h>
/**
* print_to_98 - prints all natural numbers from
* given number to 98, followed by a new line
*
* @n: input number.
*
* Return: no return.
*/
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
			printf("%d, ", n);
	}
	else if (n > 98)
	{
		for (; n > 98; n--)
			printf("%d, ", n);
	}
	printf("%d\n", n);
}

