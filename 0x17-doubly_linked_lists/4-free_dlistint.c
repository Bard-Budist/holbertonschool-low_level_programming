#include "lists.h"
/**
 * free_dlistint - Free list
 * @head: Head
*/
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
	free(head);
}
