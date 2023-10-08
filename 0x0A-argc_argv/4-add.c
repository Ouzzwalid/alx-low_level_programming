#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *isnumber - checks if a string is a number or not
 *
 *@c : string to check
 *
 *Return: The number if it's a number, -1 otherwise
 *
 */
int isnumber(char *c)
{
	int i = 0, number = 0, len;

	len = strlen(c);

	while (i < len)
	{
		if (c[i] < '0' || c[i] > '9')
			return (-1);
		number = number * 10 + (c[i] - '0');
		i++;
	}
	return (number);
}

/**
 *main - adds positive numbers passed in args
 *
 *@argc: the args counter
 *@argv: the args array
 *
 *Return: 0 Success. 1 if an arg is not a positive int
 *
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (isnumber(argv[i]) == -1)
		{
			printf("Error\n");
			return (1);
		}
		sum += isnumber(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
