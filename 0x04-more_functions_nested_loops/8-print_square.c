#include "holberton.h"
/**
* print_square - prints a square.
* @size: Variable square
* Return: Always 0
*/
void print_square(int size)
{
	int ch, ch1;

	if (size <= 0)
		_putchar('\n');
	for (ch = 0; ch < size; ch++)
	{
		for (ch1 = 0; ch1 < size; ch1++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
