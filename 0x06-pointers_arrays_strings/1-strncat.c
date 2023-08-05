#include "main.h"
/**
 *_strncat - concatenates 2 strings using atmost n bytes from src
 *
 *@dest: pointer to destination string
 *@src: pointer to the source string
 *@n: nimber of bytes
 *
 *Return: the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
