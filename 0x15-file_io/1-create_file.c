#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_content: string to write to the file
 * Return: 1 on success, -1 otherwise.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
		w = write(fd, text_content, len);
		if (w != len)
			return (-1);
	}

	close (fd);

	return (1);
}
