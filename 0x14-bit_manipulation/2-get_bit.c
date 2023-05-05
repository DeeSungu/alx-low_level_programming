#include "main.h"
/**
 * get_bit - get bit
 * @n: n
 * @index: idx
 * Return: r
 */
int get_bit(unsigned long int n, unsigned int index)
{
int g_bit;

if (index > 63)
return (-1);

g_bit = (n >> index) & 1;

return (g_bit);
}
