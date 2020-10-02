#include "holberton.h"

char *rot13(char *s)
{
	int c, i;
	char l[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char n[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (c = 0; s[c] != '\0'; c++)
		for (i = 0; l[i] != '\0'; i++)
			if (s[c] == l[i])
			{
				s[c] = n[i];
				break;
			}
	return (s);
}
