#include "hash_tables.h"
/**
 * hash_table_delete - ...
 * @ht: ..
 *
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *temp;
	hash_node_t *node_t;

	if (ht != NULL)
	{
		while (i < ht->size)
		{
			if (ht->array[i] != NULL)
			{
				temp = ht->array[i];
				while (temp)
				{
					node_t = temp;
					temp = temp->next;
					free(node_t->key);
					free(node_t->value);
					free(node_t);
				}
			}
			i++;
		}
		free(ht->array);
		free(ht);
	}
}
