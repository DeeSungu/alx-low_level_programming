#include "main.h"
/**
 * set_bit - set bit
 * @n: n
 * @index: idx
 * Return: r
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
{
	return (-1);
}
*n = ((1UL << index) | *n);

return (1);
}
