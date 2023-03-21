#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * Return: 0
 * @r: decares that theoutput will be integer
 */
int print_last_digit(int r)
{
int w;
w = r % 10;
if (r < 0)
w = -w;
_putchar(w + '0');
return (w);
}
