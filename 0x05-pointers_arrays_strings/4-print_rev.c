#include "holberton.h"
/**
* print_rev - string, in reverse.
* @s: pointer
* Return: 0
*/
void print_rev(char *s)
{
	int c, c1;

	for (c = 0; s[c] != '\0'; c++)
	{
		;
	}
	for (c1 = (c - 1); c1 >= 0; c1--)
	{
		_putchar(*(s + c1));
	}
	_putchar('\n');
}
