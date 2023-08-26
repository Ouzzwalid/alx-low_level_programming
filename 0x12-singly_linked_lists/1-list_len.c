#include "lists.h"
/**
 *list_len - Calculate the number of elements in a linked list
 *
 *@h: pointer to the linked list
 *Return: the number of elements in linked list
 */
size_t list_len(const list_t *h)
{
	int len;

	for (len = 0; h != NULL; len++)
	{
		h = h->next;
	}
	return (len);
}
