#include "main.h"
/**
 * add - adds two integers and print the result
 * Result: result
 * @num1: the output to be extracted
 * @num2: the output to be extracted
 */
int add(int num1, int num2)
{
int result = num1 + num2;
if (result < 0)
{
_putchar('-');
result = -result;
}
if (result > 9)
{
add(result / 10, 0);
}
_putchar('0' + result % 10);
}
