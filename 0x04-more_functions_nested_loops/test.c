#include <stdio.h>
/**
 *print_numbers - print numbers from 0 to 9 followed by a new line
 *
 *
 *Return: No return
 *
 */int main(void)
{
	char i;

	for (i ='0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
