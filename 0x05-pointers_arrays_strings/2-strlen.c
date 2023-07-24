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

	for (; *s != '\0'; s++)
		length++;
	return (length);
}
