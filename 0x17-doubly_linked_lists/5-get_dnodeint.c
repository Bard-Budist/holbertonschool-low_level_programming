#include "lists.h"
/**
 * get_dnodeint_at_index - get node
 * @head: Head
 * @index: Indes
 * Return: Node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node = head;
	if (head != NULL && index >= 0)
	{
		for (i = 0; i < index && node != NULL; i++)
		{
			if (node == NULL)
				return (NULL);
			node = node->next;
		}
		return (node);
	}
	return (NULL);
}
