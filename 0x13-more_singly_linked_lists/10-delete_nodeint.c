#include "lists.h"
/**
 *
 *
 *
 *
 *
 *
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new, *aux = *head;
	unsigned int var = 1;

	while (var < index + 1)
	{
		if (aux != NULL)
		{
			aux = aux->next;
			var++;
		}
		else
		{
			free(new);
			return (-1);
		}
	}

	new = aux;
	aux = aux->next;
	if (aux == NULL)
	{
		return (-1);
	}
	new->next = aux->next;
	free(aux);
	return (1);
}
