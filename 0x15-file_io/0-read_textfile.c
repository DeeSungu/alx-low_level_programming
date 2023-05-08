#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Print read textfile to STDOUT.
 * @filename: file to be read
 * @letters: number of letters to be read
 * Return: w- The n.o of bytes read and printed
 *        0 only if function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
        char *nop;
        ssize_t fd;
        ssize_t w;
        ssize_t r;

        fd = open(filename, O_RDONLY);
        if (fd == -1)
                return (0);
        nop = malloc(sizeof(char) * letters);
        r = read(fd, nop, letters);
        w = write(STDOUT_FILENO, nop, r);

        free(nop);
        close(fd);
        return (w);
}
