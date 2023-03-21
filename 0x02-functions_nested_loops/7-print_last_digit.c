#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * Return: 0
 * @num: decares that theoutput will be integer
 */
int print_last_digit(int num)
{
int last_digit = num % 10;
_putchar("0" + last_digit);
return (last_digit);
}
