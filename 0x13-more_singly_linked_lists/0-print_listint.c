#include "lists.h"
/**
 * print_listint - Print list
 * @h: Head
 * Return: Number of nodes
 *
*/
size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			printf("%i\n", h->n);
			i++;
			h = h->next;
		}
	}
	return (i);
}
