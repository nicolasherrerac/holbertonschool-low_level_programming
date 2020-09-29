#include "holberton.h"
/**
* puts_half - prints half of a string.
* @str: pointer
* Return: 0
*/
void puts_half(char *str)
{
	int c, c1;

	for (c = 0; str[c] != '\0'; c++)
		;
	if (c % 2 == 0)
		c1 = c / 2;
	else
		c1 = c - ((c - 1) / 2);
	for (; c1 < c; c1++)
	{
		_putchar(str[c1]);
	}
	_putchar('\n');

}
