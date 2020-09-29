#include "holberton.h"
/**
* rev_string - reverses a string.
* @s: pointer
* Return: 0
*/
void rev_string(char *s)
{
	int c, c1, c2;
	char a;

	c2 = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		;
	}
	for (c1 = (c - 1); c1 > c2; c1--)
	{
		a = s[c2];
		s[c2] = s[c1];
		s[c1] = a;
		c2++;
	}
}
