#include "hash_tables.h"
/**
 * hash_table_create - program function
 * @size: hash table array size
 * Return: ht
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *ht;
	unsigned long int x;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
	return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
	free(ht);
	return (NULL);
	}

	for (x = 0; x < size; x++)
	ht->array[x] = NULL;

return (ht);
}
