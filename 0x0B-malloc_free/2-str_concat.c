#include <stdlib.h>
#include "main.h"
/**
 *str_concat - Concatenates two strings
 *@s1: The 1st string
 *@s2: The s2nd string
 *
 *Return: Pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	str = malloc((i * sizeof(*s1)) + (j * sizeof(*s2) + 1));
	if (str == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i] = s2[j];
		j++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
