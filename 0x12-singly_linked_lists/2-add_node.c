#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 *add_node - adds a new node at the beginning of a list.
 *@head: Pointer (double) to the current list
 *@str: the string to be added to the list
 *
 *Return: pointer to the start of the list
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *newNode;

	while (str[len] != '\0')
		len++;
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = *head;
	*head = newNode;
	return (*head);

}
