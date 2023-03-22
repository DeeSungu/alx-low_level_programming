#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - a function that prints nutural numbers
 * @n: function parameter
 * Return: 0
 */
void print_to_98(int n)
{
if (n >= 0 && n <= 98)
{
for (1 = n ; i <= 98 ; i++)
{
printf("%d", i);
if (i != 98)
	printf(", ");
}
printf("\n");
}
else if (n < 0)
{
for (i = n ; i <= 98 ; i++)
{
printf("%d", i);
if (i != 98)
printf(", ");
}
printf("\n");
}
else if (n > 98)
{
for (i = n ; i >= 98; i--)
{
printf("%d", i);
if (i != 98)
printf(", ");
}
printf("\n");
}
else if (n == 98)
	printf("%d", n);
}
