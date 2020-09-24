#include "holberton.h"
/**
* more_numbers - prints 10 times the numbers, from 0 to 14.
*
* Return: 0
*/
void more_numbers(void)
{
	int ch;
	int ch1;

	for (ch = 0; ch < 10; ch++)
	{
		for (ch1 = 0; ch1 <= 14; ch1++)
		{
			if (ch1 > 9)
			{
				_putchar((ch1 / 10) + '0');
			}
			_putchar((ch1 % 10) + '0');
		}
		_putchar('\n');
	}
}
