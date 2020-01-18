#include "hash_tables.h"
/**
 * hash_table_print - ...
 * @ht: ...
 *
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0, band = 0;
	hash_node_t *temp;

	if (ht != NULL)
	{
		printf("{");
		while (i < ht->size)
		{
			temp = ht->array[i];
			while (temp != NULL)
			{
				if (i > 0 && band != 0)
					printf(", ");
				printf("'%s': '%s'", temp->key, temp->value);
				temp = temp->next;
				if (temp != NULL)
				{
					band = 0;
					printf(", ");
					continue;
				}
				band = 1;
			}
			i++;
		}
		printf("}\n");
	}
}
