#include "lists.h"
/**
 * delete_nodeint_at_index - Deelete nodes
 * @head: Head
 * @index: index
 * Return: int
 *
 *
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new = NULL, *aux = *head;
	unsigned int var = 0;

	while (var < index)
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
