#include "hash_tables.h"
/**
 * hash_table_create - The function of program
 * @size: hash table array size
 * Return: h#t
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *h#t;
	unsigned long int x;

	h#t = malloc(sizeof(hash_table_t));
	if (h#t == NULL)
	return (NULL);

	h#t->size = size;
	h#t->array = malloc(sizeof(hash_node_t *) * size);
	if (h#t->array == NULL)
	{
	free(h#t);
	return (NULL);
	}

	for (x = 0; x < size; x++)
	h#t->array[x] = NULL;

return (h#t);
}
