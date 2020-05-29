#include "hash_tables.h"
/**
 *hash_table_print - Prints a hash table
 *@ht: The hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	char prt = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (prt == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			prt = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
