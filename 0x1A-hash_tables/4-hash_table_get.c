#include "hash_tables.h"
/**
 *hash_table_get - Retrieves a value associated with a key
 *@ht: The hash table
 *@key: The key we are looking for.
 *Return: The value associated to the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *key_copy;
	unsigned int i;
	hash_node_t *tmp;

	if (ht == NULL)
		return (NULL);
	key_copy = strdup(key);
	i = key_index(key, ht->size);
	tmp = ht->array[i];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key_copy) == 0)
			break;
		tmp = tmp->next;
	}
	free(key_copy);
	if (tmp == NULL)
		return (NULL);
	return (tmp->value);
}
