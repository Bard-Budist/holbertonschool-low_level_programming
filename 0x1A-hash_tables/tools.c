#include "hash_tables.h"
/**
 * add_node - ...
 * @head: ..
 * @str: ..
 * @value: ..
 * Return: ..
*/
hash_node_t *add_node(hash_node_t **head, const char *str, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (str == '\0')
	{
		free(new_node);
		return (NULL);
	}
	new_node->value = strdup(value);
	new_node->key = strdup(str);
	if (*head != NULL)
	{
		new_node->next = *head;
		(*head) = new_node;
		return (new_node);
	}
	else
	{
		new_node->next = NULL;
		(*head) = new_node;
		return (*head);
	}
	return (NULL);
}
