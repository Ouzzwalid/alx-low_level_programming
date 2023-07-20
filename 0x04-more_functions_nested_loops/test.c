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
	int i, j, size;

	printf("enter the size : ");
	scanf("%d", &size);
	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for(j = 0; j < size; j++)
				putchar('#');
			putchar('\n');
		}	
	}
	else
		putchar('\n');	

	return (0);
}
