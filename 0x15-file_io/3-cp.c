#include "holberton.h"
/**
 * main -  program that copies the content of a file to another file.
 * @argc: number of arguments.
 * @argv: each argument.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, read_char, w_error;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_to = open(argv[1], O_RDONLY);
	if (file_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_from = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_from < 0)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	do {
		read_char = read(file_to, buffer, 1024);
		w_error = write(file_from, buffer, read_char);
	} while (read_char == 1024);
	if (read_char < 0)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]),
		    exit(98);
	if (w_error < 0)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
			argv[2]),
		    exit(99);
	if (close(file_to) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
	if (close(file_from) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	return (0);
}
