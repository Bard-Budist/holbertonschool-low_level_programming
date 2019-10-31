#include "lists.h"
/**
 * list_len -  list len
 * @h: Parameter
 * Return: Number nodes
 *
*/
size_t list_len(const list_t *h)
{
	unsigned long n = 0;

	if (h)
	{
		while (h != NULL)
		{
			n++;
			h = h[0].next;
		}
	}
	return (n);
}
