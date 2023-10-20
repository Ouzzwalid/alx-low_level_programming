#include "lists.h"
#include <string.h>
/**
 *add_node_end - adds a new node at the end of a list.
 *@head: Pointer (double) to the current list
 *@str: the string to be added to the list
 *
 *Return: pointer to the added element
 */
list_t *add_node_end(list_t **head, const char *str)
{
		unsigned int len = 0;
	list_t *newNode, *current;

	while (str[len] != '\0')
		len++;
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = newNode;

	return (newNode);
}
