#include "main.h"
/**
 * _isalpha - a function that checks for alphabetic characters
 * Return: 0 or 1
 * @c: indicates that the output will be integer
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
