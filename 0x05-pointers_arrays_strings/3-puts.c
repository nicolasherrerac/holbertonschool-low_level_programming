#include "holberton.h"
/**
* _puts - prints a string.
* @str: pointer
* Retunr: 0
*/
void _puts(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
