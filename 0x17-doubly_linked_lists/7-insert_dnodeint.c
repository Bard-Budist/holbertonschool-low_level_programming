#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at the int
 * @h: Head
 * @idx: Index
 * @n:Number
 * Return: Return address of node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *node;
	dlistint_t *temp = *h;

	if (*h != NULL && idx >= 0)
	{
		node = malloc(sizeof(dlistint_t));
		if (node == NULL)
			return (NULL);
		node->n = n;
		for (i = 0; i < idx - 1; i++)
		{
			if (temp == NULL)
				return (NULL);
			temp = temp->next;
		}
		node->prev = temp;
		node->next = temp->next;
		temp->next = node;
		return (node);
	}
	return (NULL);
}
