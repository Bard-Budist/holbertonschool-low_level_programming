#include "lists.h"
/**
 * add_nodeint - add Nodes int
 * @head: Head
 * @n: Data of integer
 * Return: Node
 *
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}
