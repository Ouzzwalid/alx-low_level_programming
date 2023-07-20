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
	int i, j, n;

	printf("enter n : ");
	scanf("%d", &n);
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			j = 0;
			while(j < i)
			{
				putchar('.');
				j++;
			}
			putchar('\\');
			putchar('\n');
		}
	}
	else
		putchar('\n');	

	return (0);
}
