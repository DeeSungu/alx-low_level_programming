root@bbdfd58aae24:/alx-low_level_programming/0x07-pointers_arrays_strings# more 7-print_chessboard.c 
#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
	for (j = 0; j < 8; j++)
	{
	_putchar(a[i][j]);
	}
	_putchar('\n');
	}
}
