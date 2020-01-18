#include "hash_tables.h"
/**
 *
 *
 *
 *
 *
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *temp;
	if (ht != NULL)
	{
		while (i < ht->size)
		{
			if (ht->array[i] != NULL)
			{
				temp = ht->array[i];
				while (temp != NULL)
				{
					free(temp);
					free(temp->key);
					free(temp->value);
					temp = temp->next;
				}
			}
			i++;
		}
	}
	free(temp);
	free(ht->array);
	free(ht);
}
