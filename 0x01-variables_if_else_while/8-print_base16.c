#include <stdio.h>
/**
* main - Hexadecimal
* Description:print numbers of base 16 in lowercase, followed by a new line.
* Return: 0
*/
int main(void)
{
	int num;
	char ch1;

	for (num = 0; num <= 9; num++)
	{
	putchar((num % 10) + '0');
	}
	for (ch1 = 'a'; ch1 <= 'f'; ch1++)
	{
	putchar(ch1);
	}
	putchar('\n');
	return (0);
}
