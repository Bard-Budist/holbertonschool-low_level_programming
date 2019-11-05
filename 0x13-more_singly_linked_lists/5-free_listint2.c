#include "lists.h"
/**
 * free_listint2 - Free double pointer
 * @head: head double pointer
 *
 *
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			temp = *head;
			*head = temp->next;
			free(temp);
		}
	}
	else
	{
		return;
	}
	free(*head);
	head = NULL;
}
