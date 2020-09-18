#include <stdio.h>
/**
* main - Inventing is a combination of brains and materials
* Description: prints all possible different combinations of two digits.
* Return: 0
*/
int main(void)
{
	int ch;
	int ch1;

	for (ch = 0; ch <= 9; ch++)
	{
	for (ch1 = ch + 1; ch1 <= 9; ch1++)
	{
	putchar((ch % 10) + '0');
	putchar((ch1 % 10) + '0');
	if (ch == 8 && ch1 == 9)
		continue;
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
