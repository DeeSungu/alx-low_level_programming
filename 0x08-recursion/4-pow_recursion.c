#include "main.h"
/**
 * _pow_recursion - a function that returns a value x raised to a power y
 * @x: the value
 * @y: the value to be raised
 * Return: power of x
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
	return (1);
	}
	if (y < 0)
	{
	return (-1);
	}
	else
	{
	return (x * _pow_recursion(x, y - 1));
	}
}
