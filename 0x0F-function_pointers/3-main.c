#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints the result of simle operations
 *
 *@argc: number of arguments
 *@argv: array of arguments
 *Return: always 0
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];
	if (get_op_func(op) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((num2 == 0) && (*op == '/' || *op == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
