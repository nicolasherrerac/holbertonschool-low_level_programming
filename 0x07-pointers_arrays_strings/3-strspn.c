#include "holberton.h"

unsigned int _strspn(char *s, char *accept)
{
	int c, i;

	for (c = 0; s[c] != '\0'; c++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[c] == accept[i])
			{
				break;
			}
		}
		if (!accept[i])
			break;
	}
	return (c);
}
