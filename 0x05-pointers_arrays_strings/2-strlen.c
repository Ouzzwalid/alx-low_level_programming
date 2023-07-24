#include "main.h"
/**
 *_strlen - Calculate the lenth of a string
 *
 *@s: the string
 *
 *Return: the lesngth of the string
 *
 */
int _strlen(char *s)
{
	int length;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
