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

	while (head)
	{
		if (i == index)
			return (head);
	head = head[0].next;
	i++;
	}
	return (NULL);
}
