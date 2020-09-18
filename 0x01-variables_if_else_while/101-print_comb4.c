#include <stdio.h>
/**
* main - The success combination in business is
* Description: prints all possible different combinations of three digits.
* Return: 0
*/
int main(void)
{
	int ch;
	int ch1;
	int ch2;

	for (ch = 0; ch <= 9; ch++)
	{
	for (ch1 = ch + 1; ch1 <= 9; ch1++)
	{
	for (ch2 = ch1 + 1; ch2 <= 9; ch2++)
	{
	putchar((ch % 10) + '0');
	putchar((ch1 % 10) + '0');
	putchar((ch2 % 10) + '0');
	if (ch == 7 && ch1 == 8 && ch2 == 9)
		continue;
		putchar(',');
		putchar(' ');
	}
	}
	}
	putchar ('\n');
	return (0);
}
