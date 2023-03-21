#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * Return: 0
 * @num: decares that theoutput will be integer
 */
int print_last_digit(int num)
{
int last_digit = num % 10;
_putchar(last_digit + '0');
return (last_digit);
}
