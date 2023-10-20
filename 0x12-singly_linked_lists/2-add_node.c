#include "lists.h"
#include <string.h>
/**
 *add_node - adds a new node to the beginning of a list
 *
 *@head: pointer to the current list
 *@str: the string to be added to the node
 *
 *Return: the address of the new element, or NULL if it failed
 *
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
