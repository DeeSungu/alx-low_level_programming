#include "main.h"
/**
 * _print_rev_recursion - afunction that prints a string in reverse
 * @s: string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
	return;
	}
	_putchar(*s);
	_print_rev_recursion(s + 1);
}
