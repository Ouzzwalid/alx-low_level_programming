#include "main.h"
/**
 *_isdigit - Checks a character is digit
 *
 *@c: the ASCII code of the character
 *
 *Return: 1 if c is digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
