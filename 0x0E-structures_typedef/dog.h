#ifndef HEADER
#define HEADER dog.h
/**
 *struct dog - define a new structure called dog
 *@name: the name of the dog
 *@age: the age of the dog
 *@owner : the owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
