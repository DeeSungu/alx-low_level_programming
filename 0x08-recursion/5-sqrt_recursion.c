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
	if (n == 0 || n == 1)
	{
	return (1);
	}
	int root = _sqrt_recursion(n / 2);

	if (root * root == n)
	{
	return (root);
	}
	else if (root * root < n)
	{
	return (root + 1);
	}
	else
	{
	return (root - 1);
	}
}
