#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - binary to uint
 * @b: b
 * Return: r
 */
unsigned int binary_to_uint(const char *b)
{
int a;
unsigned int j = 0;

if (b == NULL)
return (0);

for (a = 0; b[a]; a++)
{
if (b[a] < '0' || b[a] > '1')
return (0);
j = 2 * j + b[a] - '0';
}
return (j);
}
