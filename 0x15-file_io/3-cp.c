#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * main -  program that copies the content of a file to another file.
 * @argc: number of arguments.
 * @argv: each argument.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	char buf[1024];
	int file_from, file_to, read_chars, w_error;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	do {
		read_chars = read(file_from, buf, 1024);
		w_error = write(file_to, buf, read_chars);
	} while (read_chars == 1024);
	if (read_chars < 0)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
		argv[1]), exit(98);
	if (w_error < 0)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
		argv[2]), exit(99);
	if (close(file_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	if (close(file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
	return (0);
}
