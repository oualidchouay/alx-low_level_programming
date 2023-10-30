#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t len = 0;
	int fd;

	if (!filename || (fd = open(filename, O_WRONLY | O_APPEND)) == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
		if (write(fd, text_content, len) != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}