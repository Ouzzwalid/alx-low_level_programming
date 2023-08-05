#include "main.h"
/**
 *_strcat - concatenates 2 strings
 *
 *@dest: the pointer to destination string
 *@src: the pointer to source string
 *
 *Return: the concatenated string ( dest + src)
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (*(dest + i) != '\0')
		i++;
	j = 0;
	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	return (dest);
}
