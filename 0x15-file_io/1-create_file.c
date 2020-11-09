#include "holberton.h"
/**
 * create_file - Create a file object.
 * @filename: pointer to text.
 * @text_content: content of chars.
 * Return: 1 if sucessfull and -1 if fail.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int count;

	if (filename == NULL)
		return (-1);

	if (text_content)
	{
		count = 0;
		while (text_content[count])
		{
			count++;
		}
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	write(fd, text_content, count);
	return (1);
}
