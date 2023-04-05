#include "main.h"
/**
 * is_prime_number - returns values 1 or 0 if prime n.o
 * @n: input number
 * Return: 1 or 0;
 */
int is_prime_number(int n)
	{
	if (n <= 1)
	{
	return (0);
	}
	else if (n <= 3)
	{
	return (1);
	}
	else if (n % 2 == 0 || n % 3 == 0)
	{
	return (0);
	}
	int max_divisor = sqrt(n);
	int divisor = 5;

	while (divisor <= max_divisor)
	{
	if (n % divisor == 0 || n % (divisor + 2) == 0)
	{
	return (0);
	}
	divisor += 6;
	}
	return (1);
}
