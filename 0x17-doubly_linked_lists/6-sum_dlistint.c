#include "lists.h"
/**
 * sum_dlistint - Sum list
 * @head: Head
 * Return: Sum
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (head != NULL)
	{
		while (temp != NULL)
		{
			sum += temp->n;
			temp = temp->next;
		}
		return (sum);
	}
	return (sum);
}
