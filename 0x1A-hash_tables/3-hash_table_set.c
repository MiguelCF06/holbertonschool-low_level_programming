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
	hash_node_t *node;

	if (ht == NULL)
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);

	node_handler(ht, node);
	return (1);
}

/**
 *node_handler - Look if the index is a linked list, and traverse it
 *to look if there is not already an item with the key passed. If there
 * is an item add a node.
 *@ht: The hashtable
 *@node: The Linked list to add a node or update.
 */
void node_handler(hash_table_t *ht, hash_node_t *node)
{
	unsigned long int i = key_index(node->key, ht->size);
	hash_node_t *tmp = ht->array[i];

	if (ht->array[i] != NULL)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (strcmp(tmp->key, node->key) == 0)
				break;
			tmp = tmp->next;
		}
		if (tmp == NULL)
		{
			node->next = ht->array[i];
			ht->array[i] = node;
		}
		else
		{
			free(tmp->value);
			tmp->value = strdup(node->value);
			free(node->value);
			free(node->key);
			free(node);
		}
	}
	else
	{
		node->next = NULL;
		ht->array[i] = node;
	}
}
