#include "main.h"
/**
 * flip_bits - flip bits
 * @n: n
 * @m: m
 * Return: r
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int a =  0;
unsigned long int f_bits = n ^ m;

while (f_bits != 0)
{
a += f_bits & 1;
f_bits >>= 1;
}
return (a);
}
