#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed to the program
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}

