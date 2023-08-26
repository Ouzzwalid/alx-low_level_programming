#include "lists.h"
#include <stdio.h>
/**
 *print_list - prints the elements of a list
 *
 *@h: pointer to the list to be printed
 *
 *Return: number of printed elements
 *
 *
 */
size_t print_list(const list_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
