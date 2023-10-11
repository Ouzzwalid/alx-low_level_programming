#include "3-calc.h"
/**
 *op_add - calculates the sum of 2 integers
 *@a: 1st int
 *@b: 2nd int
 *Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_sub - calculates the difference between 2 integers
 *@a: the 1st int
 *@b: 2n int
 *Return: the result of a-b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - calculates the multiplication of 2 integers
 *@a: 1st int
 *@b: 2nd int
 *Return: the result of a*b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - calculates the result of division of a by b
 *@a: 1st int
 *@b: 2nd int
 *Return: the result of a/b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 *op_mod - calculates the remainder of division of a by b
 *@a: 1st int
 *@b: 2nd int
 *Return: The remainder of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
