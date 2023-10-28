#include "main.h"
/**
 *get_bit - Returns the value of a bit at a given index
 *@n: the given number
 *@index: the index
 *Return: the value of a bit , or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > ((sizeof(n) - 1) * 8))
		return (-1);
	return ((n >> index) & 1);
}
