#include "lists.h"
/**
 * add_nodeint_end - Add node at end list
 * @head: Head list
 * @n: Data n integer
 * Return:  node
 *
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *end = (*head);

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	while (end->next != NULL)
		end = end->next;
	end->next = temp;
	return (temp);
}
