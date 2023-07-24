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
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
