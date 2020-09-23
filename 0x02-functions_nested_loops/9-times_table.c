#include "holberton.h"

/**
 * times_table - prints a times-table
 *
 * Return: 0 void
 */

void times_table(void)
{
	int num, num1, res, con, dig;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num = 0; num < 10; num++)
		{
			res = num * num1;
			con = res / 10;
			dig = res % 10;
			if (num > 0)
			{
				_putchar(' ');
			}
			if ((res < 10) && (num > 0))
			{
				_putchar(' ');
			}
			else if (res > 9)
			{
				_putchar(con + '0');
				_putchar(dig + '0');
			}
			if (num < 9)
			{
				_putchar(',');
			}
			else if (num == 9)
			{
				_putchar('\n');
			}
		}
	}
}
