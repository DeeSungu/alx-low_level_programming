#iclude "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character should be printed
 * Return: 0
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	_putchar('_');
	}
	_putchar('\n');
}
