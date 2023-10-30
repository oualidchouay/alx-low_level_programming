#include "main.h"

/**
 * error_exit - Handle program errors and exit gracefully.
 * @code: The exit code to be returned when the program exits.
 * @msg: A descriptive error message explaining the issue.
 * @filename: The name of the file where the error occurred.
 * Return: no return.
 */
void error_exit(int code, const char *msg, const char *filename)
{
	dprintf(STDERR_FILENO, "Error: %s %s\n", msg, filename);
	exit(code);
}

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t nrd, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Can't read from file", argv[1]);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		error_exit(99, "Can't write to", argv[2]);

	while ((nrd = read(fd_from, buf, sizeof(buf))) > 0)
	{
		if ((nwr = write(fd_to, buf, nrd)) != nrd)
			error_exit(99, "Can't write to", argv[2]);
	}

	if (nrd == -1)
		error_exit(98, "Can't read from file", argv[1]);

	if (close(fd_from) == -1)
		error_exit(100, "Can't close fd", argv[1]);

	if (close(fd_to) == -1)
		error_exit(100, "Can't close fd", argv[2]);

	return (0);
}