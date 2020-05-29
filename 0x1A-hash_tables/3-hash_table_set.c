#include "hash_tables.h"
#include <string.h>
/**
 *hash_table_set - Adds an element to the hash table
 *@ht: The hash table
 *@key: The key that can't be empty
 *@value: Value associated to the key.
 *Return: 1 if success, 0 if fail.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *tmp;
	unsigned long int idx;
	char *nValue;

	if (ht == NULL || ht->array == NULL || ht->size == 0 || key == NULL ||
	    strlen(key) == 0 || value == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			nValue = strdup(value);
			if (nValue == NULL)
				return (0);
			free(tmp->value);
			tmp->value = nValue;
			return (1);
		}
		tmp = tmp->next;
	}
	node = node_handler(key, value);
	if (node == NULL)
		return (0);
	node->next = ht->array[idx];
	ht->array[idx] = node;
	return (1);
}

/**
 *node_handler - Handle nodes and creates it.
 *@key: The key of the hash table
 *@value: The value of the key.
 *Return: The new node
 */
hash_node_t *node_handler(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}
