#include "lists.h"
/**
 * print_list - print list
 * @h: List
 * Return:  umber of nodes
 *
*/
size_t print_list(const list_t *h)
{
	unsigned long i = 0;

	if  (h)
	{
		for (i = 0; h != NULL; i++)
		{
			if (h[0].str != NULL)
				printf("[%i] %s\n", h[0].len, h[0].str);
			else
				printf("[0] (nil)\n");
			h = h[0].next;
		}
	}
	return (i);
}
