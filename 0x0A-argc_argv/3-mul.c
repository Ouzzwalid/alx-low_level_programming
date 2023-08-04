#include <stdio.h>
#include <stdlib.h>
/**
 *main - multiplies two numbers passed in args
 *
 *@argc :  the counter of args
 *@argv : the array of args
 *
 * Return: 1 if args ar less than 3
 *	0 if success
 */
int main(int argc, char *argv[])
{
	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
