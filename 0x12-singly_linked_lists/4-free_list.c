#include "lists.h"
#include <stdlib.h>
/**
 *free_list - frees a list
 *
 *@head: pointer to the list
 *
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
