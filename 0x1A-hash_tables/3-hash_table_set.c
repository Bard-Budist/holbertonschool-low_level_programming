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
	int index = 0;

	if (ht == NULL)
	{
		return (0);
	}
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array == NULL)
		return (0);
	ht->array[index] = add_node(&ht->array[index], key, value);
	return (1);
}
