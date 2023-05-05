#include "main.h"
#include <stddef.h>

/**
 * print_binary - print binary
 * @n: n
 */

void print_binary(unsigned long int n)
{
unsigned long int a;
int b;
int j = 0;
for (b = 63; b >= 0; b--)
{
	a = n >> b;
	if (a & 1)
	{
	_putchar('1');
	j++;
	}
	else if (j)
	{
	_putchar('0');
	}
}
if (j == 0)
_putchar('0');
}
