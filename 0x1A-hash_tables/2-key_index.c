#include "hash_tables.h"
/**
 *key_index - Gives the index of the key
 *@key: Key in the hash table
 *@size: Size of the array of the hash table
 *Return: The index in which the key/value is.
 */
unsigned long int key_index(const char *key, unsigned long int size)
{
	unsigned int hash;
	unsigned int i;

	hash = 0;
	i = 0;
	while (key && key[i])
	{
		hash = (hash + key[i]) % size;
		++i;
	}
	return (hash);
}
