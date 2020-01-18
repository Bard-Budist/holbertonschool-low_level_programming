#include "hash_tables.h"
/**
 * hash_table_get - ...
 * @ht: ...
 * @key: ...
 * Return: ...
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *temp;

	if (ht == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
	}
	return (NULL);
}
