#include "lists.h"
/**
 * add_node - dd node
 * @head: Head
 * @str: char
 * Return: Node
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	int count = 0;
	list_t *node = malloc(sizeof(list_t));

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	else
	{
		while (str[count] != '\0')
			count++;
		node->str = strdup(str);
		node->len = count;
		node->next = (*head);
		(*head) = node;
	}
	return (node);
}

