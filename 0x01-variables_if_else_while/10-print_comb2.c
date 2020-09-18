#include <stdio.h>
/**
* main - 00...99
* Description: Write a program that prints the numbers from 00 to 99.
* Return: 0
*/
int main(void)
{
	int ch;

	for (ch = 0; ch < 100; ch++)
	{
	putchar((ch / 10) + '0');
	putchar((ch % 10) + '0');
	if (ch == 99)
	{
		break;
	}
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
