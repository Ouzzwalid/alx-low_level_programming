#include <stdio.h>
/**
 *print_numbers - print numbers from 0 to 9 followed by a new line
 *
 *
 *Return: No return
 *
 */
int main(void)
{
	long i, n=612852475143;
	
	for (i = 2; i <= n; i++)
	{
		if ((n % i) == 0)
		{
			n = n / i;
			i--;
		}

	}
	printf("%lu\n",i);
	return (0);
}
