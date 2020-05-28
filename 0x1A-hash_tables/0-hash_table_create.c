#include "hash_tables.h"
/**
 *hash_table_create - Create a hash table
 *@size: The size of the array
 *Return: a pointer to the newly hash table or NULL if went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newHashTable;
	unsigned long int i;

	newHashTable = malloc(sizeof(hash_table_t));
	if (newHashTable == NULL)
		return (NULL);
	newHashTable->size = size;
	newHashTable->array = malloc(sizeof(hash_node_t *) * size);
	if (newHashTable->array == NULL)
	{
		free(newHashTable);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		newHashTable->array[i] = NULL;
	return (newHashTable);
}
