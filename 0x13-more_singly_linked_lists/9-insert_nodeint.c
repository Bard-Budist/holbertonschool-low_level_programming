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
	listint_t *new, *aux = *head;
	unsigned int var = 0;
	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}

	while (aux != NULL)
	{
		if (var == idx - 1)
		{
			new->n = n;
			new->next = aux->next;
			aux->next = new;
			return (new);
		}
		var++;
		aux = aux->next;
	}
	free(new);
	return (NULL);
}
