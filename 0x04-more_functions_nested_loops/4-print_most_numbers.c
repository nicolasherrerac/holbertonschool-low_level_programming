#include "holberton.h"
/**
* print_most_numbers - Do not print 2 and 4.
*
* Return: 0
*/
void print_most_numbers(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		if (ch == 50)
		{
			continue;
		}
		else if (ch == 52)
		{
			continue;
		}
		_putchar(ch);
	}
	_putchar('\n');
}
