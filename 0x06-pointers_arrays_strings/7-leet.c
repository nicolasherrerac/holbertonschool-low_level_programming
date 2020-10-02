#include "holberton.h"
/**
* *leet - encodes a string
* @s: pointer
* Return: 0
*/
char *leet(char *s)
{
	int c, i;
	char l[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char n[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	for (c = 0; s[c] != '\0'; c++)
		for (i = 0; l[i] != '\0'; i++)
			if (s[c] == l[i])
				s[c] = n[i];
	return (s);
}
