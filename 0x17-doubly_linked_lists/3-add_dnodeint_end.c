#include "lists.h"
/**
 * add_dnodeint_end - Add node at the end
 * @head: Head
 * @n: Value
 * Return: Addres of node
 *
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *temp = *head;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
		return (node);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = node;
	node->prev = temp;
	node->next = NULL;
	return (node);
}
