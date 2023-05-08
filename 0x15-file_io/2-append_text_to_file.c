#include "main.h"

/**
 * append_text_to_file - Function that appends text at end of file
 * @filename: The file name
 * @text_content: Is the null string to add to the end of the file
 *
 * Return: If the function fails or filename is NULL -1
 *         If the file does not exist the user lacks write permissions -1
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, w, length = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
	for (length = 0; text_content[length];)
	length++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	w = write(a, text_content, length);

	if (a == -1 || w == -1)
	return (-1);

	close(a);

	return (1);
}
