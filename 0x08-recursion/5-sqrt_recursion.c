#include "main.h"
/**
 * _sqrt_recursion - returns natural square root
 * @n: input number
 * Return: root
 */
int _sqrt_recursion(int n)
{
	int root;

	if (n < 0)
	{
	return (-1);
	}
	else if (n == 0 || n == 1)
	{
	return (n);
	}
	else
	{
	root = _sqrt_recursion(n / 2);

	if (n % 2 == 0)
	{
	return (root * 2);
	}
	else
	{
	return (root * 2 + 1);
	}
	}
}
