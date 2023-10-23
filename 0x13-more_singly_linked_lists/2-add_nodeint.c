#include "lists.h"
/**
 * add_nodeint - add a node to the beginning of a list
 *
 *@head: pointer to the list
 *@n: Integer to be added as node data
 *
 *Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = *head;
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
