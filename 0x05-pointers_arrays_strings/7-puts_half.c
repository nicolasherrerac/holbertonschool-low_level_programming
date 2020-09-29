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
	{
		;
	}
	for (c1 = 0; c1 <= (c - 1); c1++)
	{
		if (c1 > 4)
		{
			_putchar(*(str + c1));
		}
	}
	_putchar('\n');

}
