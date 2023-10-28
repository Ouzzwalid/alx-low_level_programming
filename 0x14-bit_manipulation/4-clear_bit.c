#include "main.h"
/**
 *clear_bit - sets the value of a bit to 0 at a given index of a number
 *@n: The given number
 *@index: The index
 *
 *Return: 1 Success, 1- Error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
        if (index > (8 * sizeof(n)) - 1)
                return (-1);
        *n = *n & ~( 1 << index);
        return (1);
}
