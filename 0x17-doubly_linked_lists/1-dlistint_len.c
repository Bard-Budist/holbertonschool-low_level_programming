#include "lists.h"
/**
 * dlistint_len -  pritn len
 * @h: head
 * Return: Number of nodes
 *
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *node = h;

	while (node != NULL)
	{
		node = node->next;
		n++;
	}
	return (n);
}
