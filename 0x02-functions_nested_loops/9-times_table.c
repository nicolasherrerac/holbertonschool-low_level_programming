#include "holberton.h"

/**
* times_table - prints the 9 times table
*
* Return: 0
*/

void times_table(void)
{
	int num;
	int num1;
	int result;
	int con;
	int dig;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num = 0; num < 10; num++)
		{
			result = num * num1;
			con = result / 10;
			dig = result % 10;
			if (num > 0)
			{
				_putchar(' ');
			}
			if ((result < 10) && (num > 0))
			{
				_putchar(' ');
			}
			else if (result > 9)
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
