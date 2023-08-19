#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *print_dog - Prints a dog inforrmations
 *
 *@d: the pointer to the dog
 *
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		;
	else
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("nil\n");
		printf("Age: %f\n", d->age);
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("nil\n");
	}
}
