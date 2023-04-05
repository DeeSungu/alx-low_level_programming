#include "main.h"
int my_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 * Return: the result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (my_sqrt_recursion(n, 0));
}

/**
 * my_sqrt_recursion - recurses
 * @n: number to calculate the sqaure root of
 * @i: iterator
 * Return: the result
 */
int my_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (my_sqrt_recursion(n, i + 1));
}

