#include "main.h"
/**
 * get_endianness - get endianness
 * Return: r
 */
int get_endianness(void)
{
unsigned int a = 1;
char *n = (char *) &a;
return (*n);
}
