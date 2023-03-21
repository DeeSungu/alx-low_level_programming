#include "main.h"
/**
 * print_alphabet_x10 - afunction that prints alphabets in lowercase
 */
void print_alphabet_x10(void)
{
int g, h;
for (g = 0; g < 10; g++)
{
for (h = 'a'; h <= 'z'; h++)
{
_putchar(h);
}
_putchar('\n');
}
}
