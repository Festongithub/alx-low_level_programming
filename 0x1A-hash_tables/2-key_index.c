#include "hash_tables.h"

/**
 * key_index - finds the index of the key
 * @key: key of the index
 * @size: is the size of the array of the hash table
 * use the hash_djb2 function
 * Return:index at which the key/value pair should be
 * stored in the array of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key)  % size);
}
