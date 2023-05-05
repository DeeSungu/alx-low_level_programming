#include "main.h"
/**
 * clear_bit - clear bit
 * @n: n
 * @index: idx
 * Return: r
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
{
return (-1);
}
*n = (~(1UL << index) & *n);
	return (1);
}
