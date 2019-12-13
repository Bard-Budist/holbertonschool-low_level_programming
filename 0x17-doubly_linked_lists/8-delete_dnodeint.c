#include "lists.h"
/**
 * delete_dnodeint_at_index - Delete node
 * @head: Head
 * @index: index
 * Return: Return -1
 *
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *tempo2;
	unsigned int i = 0;

	if (head == NULL && *head == NULL)
		return (-1);
	while (temp != NULL)
	{
		if (index == 0)
		{
			tempo2 = *head;
			*head = tempo2->next;
			tempo2->prev = NULL;
			return (1);
		}
		if (i == index - 1)
		{
			tempo2 = temp->next;
			tempo2->prev = temp->prev;
			temp->next = tempo2->next;
			tempo2->next->prev = tempo2;
			free(tempo2);
			return (1);
		}
		i++;
		temp = temp->next;
	}
	return (-1);
}
