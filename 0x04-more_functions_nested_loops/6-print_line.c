#include "holberton.h"
/**
* print_line - draws a straight line in the terminal.
* @n: Number of lines
* Return: 0
*/
void print_line(int n)
{
	int ch;

	for (ch = 0; ch < n; ch++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
