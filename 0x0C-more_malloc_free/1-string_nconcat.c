#include "main.h"
#include <stdlib.h>
/**
 *string_nconcat - concatenates 2 strings
 *only n bytes of the 2nd string should be concatenated if n is less then
 *the size of the 2nd string, else the 2nd string is fully concatenated
 *
 *@s1: the 1st string
 *@s2: the 2nd string
 *@n: the number of  charachters to be concatenated
 *Return: pointer to new space of memory containing the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	str = malloc(sizeof(char) * (i + n + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (j < n && s2[j] != '\0')
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
