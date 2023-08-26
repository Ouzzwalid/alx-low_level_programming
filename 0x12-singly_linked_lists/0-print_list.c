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

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
		{
			printf("[%d] %s", h->len, h->str);
			h = h->next;
		}
	}
	return (i);
}
