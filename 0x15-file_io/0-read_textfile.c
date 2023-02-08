#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 * Return: the number of letters printed, or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int o, r, w;

	if (!filename)
		return (0);
	o = open(filename, O_RDWR);
	if (o < 0)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);

	r = read(o, buf, letters);
	if (r < 0)
	{
		free(buf);
		return (0);
	}

	close(o);

	w = write(STDOUT_FILENO, buf, r);

	if (w < 0)
	{
		free(buf);
		return (0);
	}

	free(buf);
	return (w);
}
