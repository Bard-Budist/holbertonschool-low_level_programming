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
	if (temp != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = node;
		node->prev = temp->prev;
		node->next = NULL;
		return (node);
	}
	else
	{
		node->prev = NULL;
		node->next = NULL;
		(*head) = node;
		return (*head);
	}
}
