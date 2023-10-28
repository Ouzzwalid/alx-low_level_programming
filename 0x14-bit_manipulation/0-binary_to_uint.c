#include "main.h"
/**
 *_strlen - Calculate the lenth of a string
 *
 *@s: the string
 *
 *Return: the length of the string
 *
 */
int _strlen(const char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
/**
 *binary_to_uint - Converts a binary number to an unsigned int.
 *@b: the binary number to convert
 *
 *Return: The converted number - 0 if b is NULL or one char of b is not 1 or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int base = 1, i, len;

	if (b == NULL)
		return (0);
	len = _strlen(b);
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			result += base;
		base *= 2;
	}
	return (result);
}
