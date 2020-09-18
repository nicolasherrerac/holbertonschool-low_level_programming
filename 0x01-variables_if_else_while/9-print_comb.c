#include <stdio.h>
/**
* main - Patience, persistence and perspiration
* Description: prints all possible combinations of single-digit numbers.
* Return: 0
*/
int main(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
	putchar(ch);
	if (ch == 57)
	{
		break;
	}
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
