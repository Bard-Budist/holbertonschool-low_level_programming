#include "lists.h"
/**
 * free_listint - Freee lsu
 * @head: Head
 *
 *
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = temp->next;
		free(temp);
	}
	free(head);
}
