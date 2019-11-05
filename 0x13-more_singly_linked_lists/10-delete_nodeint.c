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

	if (head == NULL && *head == NULL)
		return (-1);

	while (aux)
	{
		if (index == 0)
		{
			new = *head;
			*head = new->next;
			free(new);
			return (1);
		}
		if (var == index - 1)
		{
			new = aux->next;
			aux->next = new->next;
			free(new);
			return (1);
		}
		var++;
		aux =  aux->next;
	}
	return (-1);
}
