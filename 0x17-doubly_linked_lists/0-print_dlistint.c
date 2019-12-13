#include "lists.h"
/**
 * print_dlistint - print list
 * @h: Head
 * Return: Number nodes
 *
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *node =  h;

	while (node != NULL)
	{
		printf("%i\n", node->n);
		node = node->next;
		n++;
	}
	return (n);
}
