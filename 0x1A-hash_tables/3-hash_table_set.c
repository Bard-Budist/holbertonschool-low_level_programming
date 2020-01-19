#include "hash_tables.h"
/**
 * hash_table_set - ...
 * @ht: ...
 * @key: ..
 * @value: ..
 * Return: ..
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;

	if (ht == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	ht->array[index] = add_node(&ht->array[index], key, value);
	if (ht->array[index] != NULL)
		return (1);
	return (0);
}

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
	if  (*head != NULL && strcmp((*head)->key, str) == 0)
	{
		free((*head)->value);
		(*head)->value = strdup(value);
		return (*head);
	}
	else
	{
		new_node = malloc(sizeof(hash_node_t));
		if (new_node == NULL)
		{
			return (NULL);
		}
		new_node->value = strdup(value);
		new_node->key = strdup(str);
		new_node->next = *head;
		(*head) = new_node;
	}
	return (new_node);
}
