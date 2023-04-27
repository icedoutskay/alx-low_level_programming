#include "main.h"

/**
 * create_file - creates a file and writes a text to it
 *
 * @filename: the name of the file to create
 * @text_content: the NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 *         (file can not be created, file can not be written, write "fails", etc...)
 *
 * Description: the created file must have those permissions: rw-------
 *              if the file already exists, do not change the permissions
 *              if the file already exists, truncate it
 *              if filename is NULL return -1
 *              if text_content is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		bytes_written = write(fd, text_content, len);
	else
		bytes_written = write(fd, "", 0);

	close(fd);

	if (bytes_written == -1)
		return (-1);

	return (1);
}

