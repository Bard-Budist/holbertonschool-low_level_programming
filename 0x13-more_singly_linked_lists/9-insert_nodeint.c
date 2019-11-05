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
	unsigned int var = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	while (var < idx - 1)
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
	new->n = n;
	next = aux->next;
	new->next = next;
	aux->next = new;
	return (new);
}
