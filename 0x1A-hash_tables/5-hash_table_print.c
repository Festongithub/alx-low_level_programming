#include "hash_tables.h"

/**
 * hash_table_print - Print whole the hash table.
 * @ht: Hash table.
 *
 * Return: Void.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, j = 0;
	hash_node_t *current;

	if (ht == NULL)
		return;
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		if (current != NULL)
		{
			while (current != NULL)
			{
				if (j == 1)
				{
					printf(", ");
				}
				printf("'%s': '%s'", current->key, current->value);
				j = 1;
				current = current->next;
			}
		}
	}
	putchar('}');
	putchar('\n');
}
