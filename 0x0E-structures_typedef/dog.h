#ifndef HEADERFILE
#define HEADERFILE dog.h
/**
 *struct dog - structur that defines a dog
 *@name: The name of the dog
 *@age: the age of the dog
 *@owner: The owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
void free_dog(dog_t *d);
#endif
