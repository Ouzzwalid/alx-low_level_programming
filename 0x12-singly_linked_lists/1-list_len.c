#include "lists.h"
/**
 *list_len - returns the number of elements in a linked list_t list.
 *
 *@h: pointer to the list
 *Return: the number of elements of a list
 */
size_t list_len(const list_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
