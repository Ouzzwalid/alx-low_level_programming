#include "dog.h"
/**
 *init_dog - initialize a variable of type dog
 *@d: pointer to the element to initialize
 *@name: the name of the dog
 *@age: the age of the dog
 *@owner: the owner name of the dog
 *
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
