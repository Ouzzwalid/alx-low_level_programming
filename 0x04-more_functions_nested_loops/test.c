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
	int i, j, k, size;
	
	printf("Enter the size");
	scanf("%d", &size);
	
	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - i; j > 1; j--)
				putchar('.');
			for (k = i + j ; k >= 1; k--)
				putchar('#');
			putchar('\n');
		}
	}
	else
		putchar('X');
	return (0);
}
