#include <stdio.h>
/**
* main - Display alphabetic
* Description: Display alphabetic
* Return: 0
*/
int main(void)
{
	char ch = 'a';
	char ch1 = 'A';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch1 = 'A'; ch1 <= 'Z'; ch1++)
	{
		putchar(ch1);
	}
	putchar('\n');
	return (0);
}
