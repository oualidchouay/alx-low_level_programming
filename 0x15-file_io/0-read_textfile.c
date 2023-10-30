#include "main.h"
#include <stdio.h>

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename || (fd = open(filename, O_RDONLY)) == -1 ||
		!(buf = malloc(sizeof(char) * (letters + 1))))
	{
		close(fd);
		free(buf);
		return (0);
	}

	if ((nrd = read(fd, buf, letters)) == -1 ||
		(nwr = write(STDOUT_FILENO, buf, nrd)) == -1 || nwr != nrd)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);

	return (nwr);
}