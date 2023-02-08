#include "main.h"

/**
 * read_textfile - read a text file and prints it to standard output
 * @filename: file's name
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd;
	ssize_t r, w;

	if (filename == NULL)
		return (0);
	
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	
	r = read(fd, buf, letters);
	if (r < 0)
	{
		free(buf);
		return (0);
	}

	buf[r] = '\0';

	close(fd);

	w = write(2, buf, r);

	if (w < 0)
	{
		free(buf);
		return (0);
	}

	free(buf);
	return (w);
}
