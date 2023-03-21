#include "main.h"
/**
 * _isalpha - a function that checks for alphabetic characters
 * Return: 0 or 1
 * @c: indicates that the output will be integer
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'Z')
	{
	_putchar(1);
	}
	else
	{
		_putchar(0);
	}
}
