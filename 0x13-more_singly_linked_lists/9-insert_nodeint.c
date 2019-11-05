#include "lists.h"
/**
 * insert_nodeint_at_index - insert node
 * @head: head
 * @idx: Index
 * @n: Number
 * Return: Node
 *
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *aux = *head, *next;
	unsigned int var = 1;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	if (idx == 0)
	{
		next = aux;
		new->n = n;
		new->next = next;
		aux->next = new;
		return (new);
	}
	else
	{
		while (var < idx)
		{
			if (aux == NULL)
				return (NULL);
			aux = aux->next;
			var++;
		}
		next = aux->next;
		new->n = n;
		new->next = next;
		aux->next = new;
		return (new);
	}
	free(new);
	return (NULL);
}
