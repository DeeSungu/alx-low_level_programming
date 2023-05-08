#include "main.h"

/**
 * create_file - Function that creates a file
 * @filename: The name of the file to create
 * @text_content: Null terminated string to write file
 *
 * Return: If the function fails -1.
 *         Otherwise 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fp, w, length = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
	for (length = 0; text_content[length];)
	length++;
	}

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0700);
	w = write(fp, text_content, length);

	if (fp == -1 || w == -1)
	return (-1);

	close(fp);

	return (1);
}