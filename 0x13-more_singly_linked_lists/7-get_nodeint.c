#include "lists.h"
/**
 * get_nodeint_at_index - get index
 * @head: Head
 * @index: Index
 * Return: Listint
 *
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int var = 0;
	listint_t *node;
	listint_t *aux = head;

	while (var < index)
	{
		if (aux != NULL)
		{
			aux = aux->next;
			var++;
		}
		else
		{
			return (NULL);
		}

	}
	node = aux;
	return (node);
}
