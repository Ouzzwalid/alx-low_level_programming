#include "main.h"
/**
 *factorial - function that returns the factorial of a given number
 *
 *@n: the number, integer
 *
 *Return: -1 or if n is less than0
 *	- 1 if the number is 0 or 1
 *	- the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}

