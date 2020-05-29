#include "hash_tables.h"
/**
 *key_index - Gives the index of the key
 *@key: Key in the hash table
 *@size: Size of the array of the hash table
 *Return: The index in which the key/value is.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
