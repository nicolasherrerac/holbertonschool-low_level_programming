#include <stdio.h>
/**
* main -show all the alphabet except q and e
* Description: show all the alphabet except q and e
* Return: 0
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch == 'q')
	{
		continue;
	}
	if (ch == 'e')
	{
		continue;
	}
	putchar(ch);
	}
	putchar('\n');
}
