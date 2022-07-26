#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: pointer to a const char array
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, s, t;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	s = read(fd, buffer, letters);
	if (s < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[s] = '\0';

	close(fd);

	t = write(STDOUT_FILENO, buffer, s);
	if (t < 0)
	{
		free(buffer);
		return (0);
	}

	free(buffer);

	return (t);
}
