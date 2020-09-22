#include "holberton.h"
/**
* jack_bauer - prints every minute of the day of Jack Bauer
*
* Return: 0
*/
void jack_bauer(void)
{
	int ch;
	int ch1;
	int ch2;
	int ch3;
	int sum = 10;

	for (ch = 0; ch < 3 ; ch++)
	{
		if (ch == 2)
		{
			sum = 4;
		}
		for (ch1 = 0; ch1 < sum; ch1++)
		{
			for (ch2 = 0; ch2 < 6; ch2++)
			{
				for (ch3 = 0; ch3 < 10; ch3++)
				{
					_putchar(ch + '0');
					_putchar(ch1 + '0');
					_putchar(':');
					_putchar(ch2 + '0');
					_putchar(ch3 + '0');
					_putchar('\n');
				}
			}
		}
	}
}
