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
	int i, n;

	printf("enter n : ");
	scanf("%d", &n);
	if (n <= 0)
	       putchar('0');
	for (i=0; i<n; i++)
		putchar(35);
	putchar('\n');	

	return (0);
}
