#include "lists.h"
/**
 * pop_listint - popList
 * @head: Head list
 * Return: Integer
 *
 *
*/
int pop_listint(listint_t **head)
{
	int var = 0;
	listint_t *temp = *head;

	if (temp != NULL)
	{
		var = (*head)->n;
		*head = temp->next;
		free(temp);
	}
	return (var);
}
