#include <stdio.h>
/**
 *main - prints all  arrguments including the 1st
 *
 *@argc : the number of arguments
 *@argv :  the array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
