#include <stdio.h>

int main(void)
{
	int i, j, result, n;

	printf("Enter a number: ");
	scanf("%d", &n);

	for (i = 0; i <= n; i++)
	{
		putchar(48);
		for (j = 1; j <= n; j++)
		{
			result = i*j;
			putchar(44);
			putchar(32);

			if (result <= 9)
			{
				putchar(32);
				putchar(32);
				putchar(result + 48);
			}
			else if (result <= 99 )
			{
				putchar(32);
				putchar((result/10) + 48);
				putchar((result%10) +48);
			}
			else
			{
				putchar(((result / 100) % 10) + 48);
				putchar(((result/10)% 10)+ 48);
				putchar((result % 10) + 48);
			}
		}
		putchar('\n');
	}
	
	return (0);
}
