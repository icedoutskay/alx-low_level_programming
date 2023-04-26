#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the file name
 * @letters: number of letters it should read and print
 *
 * Return: number of letters it could read and print, or 0 if file cannot be
 * opened or read, if filename is NULL or if write fails or does not write the
 * expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
        ssize_t fd, rcount, wcount;
        char *buffer;

        if (!filename)
                return (0);

        buffer = malloc(letters);
        if (!buffer)
                return (0);

        fd = open(filename, O_RDONLY);
        if (fd == -1) {
                free(buffer);
                return (0);
        }

        rcount = read(fd, buffer, letters);
        if (rcount == -1) {
                free(buffer);
                close(fd);
                return (0);
        }

        wcount = write(STDOUT_FILENO, buffer, rcount);
        if (wcount == -1 || rcount != wcount) {
                free(buffer);
                close(fd);
                return (0);
        }

        free(buffer);
        close(fd);

        return (wcount);
}

