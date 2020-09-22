#include "holberton.h"
/**
* main
* Description: prints 10 times the alphabet, in lowercase.
* Return: 0
*/
void print_alphabet_x10(void)
{
	int ch;
	int ch1;

	for (ch = 0; ch <= 9; ch++)
	{
		for (ch1 = 'a'; ch1 <= 'z'; ch1++)
		{
			_putchar(ch1);
		}
	_putchar('\n');
	}
}
