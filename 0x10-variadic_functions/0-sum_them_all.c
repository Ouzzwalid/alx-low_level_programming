#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - return sum of all parameters
 *@n: the number of parameters
 *
 *Return: 0 if n = 0 and the sum otherwise
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int sum = 0, i = 0;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (; i < n; i++)
		sum += va_arg(args, unsigned int);
	va_end(args);
	return (sum);
}
