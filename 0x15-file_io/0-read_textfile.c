#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to text.
 * @letters: numbers of characters.
 * Return: w_error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t read_chars, w_error;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(letters * sizeof(char));
	if (buf == NULL)
		return (0);

	read_chars = read(fd, buf, letters);
	if (read_chars < 0)
		return (0);

	w_error = write(STDOUT_FILENO, buf, read_chars);
	if (w_error < 0)
		return (0);

	close(fd);
	free(buf);
	return (w_error);
}
