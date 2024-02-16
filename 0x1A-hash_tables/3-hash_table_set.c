#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: is the key can not be an empty string
 * @value: is the value of the key must be duplicated
 * Return: Element to be inserted
 * */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 
