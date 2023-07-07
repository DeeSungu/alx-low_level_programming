#include "hash_tables.h"

/**
 * hash_djb2 - Program function
 * @str: pointer
 * Return: Hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash;
int x;

	hash = 5381;
	while ((x = *str++))
	hash = ((hash << 5) + hash) + x;

	return (hash);
}
