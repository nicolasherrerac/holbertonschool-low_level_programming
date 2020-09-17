#include <stdio.h>
/**
* main -show all the alphabet except q and e
* Description: show all the alphabet except q and e
* Return: 0
*/
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	if (ch != 'q')
	if (ch != 'e')
	putchar('\n');
}
