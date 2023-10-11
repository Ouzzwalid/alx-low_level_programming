#include <stddef.h>
#include "dog.h"
/**
 *init_dog - initialize a variable of type struct dog
 *@d: pointer to the element to be initialized
 *@name: the dog name
 *@age: the dog age
 *@owner: the dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
