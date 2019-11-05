#include "lists.h"
/**
 * listint_len - List len
 * @h: hea
 * Return: number of nodes
 *
*/
size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			i++;
			h = h->next;
		}
	}
	return (i);
}
