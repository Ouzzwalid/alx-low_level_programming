#include <stdio.h>
/**
 *print_numbers - print numbers from 0 to 9 followed by a new line
 *
 *
 *Return: No return
 *
 */int main(void)
{
	int i;

	for (i =0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
			putchar(i + 48);
	}
	putchar('\n');
	return (0);
}
