#include "holberton.h"

void puts2(char *str)
{
	int c, c1;

	for (c = 0; str[c] != '\0'; c++)
	{
		;
	}
	for (c1 = 0; c1 <= (c -1); c1++)
	{
		if (c1 % 2 == 0)
			_putchar(*(str + c1));
	}
	_putchar('\n');
}
