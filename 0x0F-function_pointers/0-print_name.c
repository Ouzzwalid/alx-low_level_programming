#include "function_pointers.h"
#include <stdlib.h>
/**
 *print_name - prints a name
 *
 *@name: pointer to name
 *@f: pointer to a function that requires a char and returns nothing
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
		f(name);
}
