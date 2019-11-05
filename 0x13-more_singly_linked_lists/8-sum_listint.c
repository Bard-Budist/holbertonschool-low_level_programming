#include "lists.h"
/**
 * sum_listint - Sum number
 * @head: head Linked
 * Return: Sum
 *
 *
*/
int sum_listint(listint_t *head)
{
	listint_t *aux = head;
	int suma = 0;

	if (aux != NULL)
	{
		while (aux != NULL)
		{
			suma += aux->n;
			aux = aux->next;
		}
		return (suma);
	}
	return (0);
}
