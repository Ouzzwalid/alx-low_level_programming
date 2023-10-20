#include "lists.h"
/**
 *print_list - prints elements of a list
 *
 *@h: pointer to the list
 *
 *Return: Returns the number of elements of the list
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
