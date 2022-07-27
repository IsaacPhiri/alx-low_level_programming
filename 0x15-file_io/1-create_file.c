#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: pointer to name of the file to create
 * @text_content: pointer to null terminated string to write to the file
 * if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 *
 * Return:1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */

int create_file(const char *filename, char *text_content)
{
	int fd, write_fd;
	int text_index = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[text_index])
			text_index++;
		write_fd = write(fd, text_content, text_index);
		if (write_fd != text_index)
			return (-1);
	}

	close(fd);

	return (1);
}
