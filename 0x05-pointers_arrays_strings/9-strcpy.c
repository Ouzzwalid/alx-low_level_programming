#include "main.h"
/**
 *_strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest
 *
 *@dest: Destination
 *@src: Source
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0, i;

	while (*(src + len) != '\0')
		len++;
	for (i = 0; i < len; i++)
	{
		dest[i] = *(src + i);
	}
	dest[len] = '\0';
	return (dest);
}
