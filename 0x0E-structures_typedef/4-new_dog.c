#include "dog.h"
#include <stdlib.h>
/**
*_strcpy - copy a string from source to destination
*
*@src: pointer to the source
*@dest: pointer to the destination
*
*Return: the copied string
*
*/

char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = 0;
	while (src[len] != '\0')
		len++;
	for (i = 0; i < len ; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
*_strlen - Calculates the length of a string
*
*@s: the pointer to the string
*
*Return: the length of the string
*/
int _strlen(char *s)
{
	int len;

	len	= 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 *new_dog - creates a new dog
 *
 *@name: the name of the dog
 *@age: the age of the dog
 *@owner: the ownerof the dog
 *
 * Return: pointer to the dog (success) NULL if not
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int nameLen, ownerLen;

	nameLen = _strlen(name);
	ownerLen = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (nameLen + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (ownerLen + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
