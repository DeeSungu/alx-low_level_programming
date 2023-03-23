#include "main.h"
#include (unistd.h)
/**
 * _putchar - outputs the character c to stdout
 * @c: the output character to print
 * Return: 1 on success
 * 0n error, -1 is printed and error number is set appropriately
 */
int _putchar(char c)
{
return(write(1, &c, 1));
}
