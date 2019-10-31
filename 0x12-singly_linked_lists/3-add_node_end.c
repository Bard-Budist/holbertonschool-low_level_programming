#include "lists.h"

int countString(const char *str)
{
	int n = 0;
	while (str[n] != '\0')
	n++;
	return (n);
}
/**
 *
 *
 *
 *
 *
 *
 *
*/
list_t *add_node_end(list_t **head, const char *str)
{

	list_t *ultimo = *head;
	list_t *node = malloc(sizeof(list_t));
	if (node == NULL)
		free(node);
		return (NULL);

	ultimo->str = strdup(str);
	ultimo->len = countString(str);
	ultimo->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	while (ultimo->next != NULL)
	{
		ultimo = ultimo->next;
	}

	ultimo->next = node;

	return (node);
}



