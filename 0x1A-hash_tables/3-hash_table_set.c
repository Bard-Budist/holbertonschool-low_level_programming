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
	unsigned int index = 0;

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
	new_node->value = _strdup((char *)value);
	new_node->key = _strdup((char *)str);
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

/**
 * _strdup - str
 * @str: String paramter
 * Return: Char
 *
 *
 *
*/
char *_strdup(char *str)
{
	char *p;
	unsigned int a = 0, i = 0;

	if (str == 0)
		return (NULL);
	while (str[a] != '\0')
		a++;
	a++;
	p = malloc(a * sizeof(char));
	if (p == 0)
		return (NULL);
	while (i < a)
	{
		p[i] = str[i];
		i++;
	}
	return (p);
}
