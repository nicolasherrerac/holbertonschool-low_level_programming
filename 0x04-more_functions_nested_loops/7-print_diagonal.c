#include "holberton.h"
/**
* print_diagonal - diagonal line on the terminal.
* @n: Number of lines
* Return: 0
*/
void print_diagonal(int n)
{
	int ch, ch1;

	if (n <= 0)
		_putchar('\n');
	for (ch = 0; ch < n; ch++)
	{
		for (ch1 = 0; ch1 < ch; ch1++)
		{
			_putchar(' ');
		}
	_putchar(92);
	_putchar('\n');
	}
}
