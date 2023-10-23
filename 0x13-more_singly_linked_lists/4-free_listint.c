#include "lists.h"
/**
 * free_listint - frees a list
 * @head: pointer to the list
 *
 * I used recursive function to free the list 
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
