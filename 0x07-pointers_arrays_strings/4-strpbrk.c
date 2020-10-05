#include "holberton.h"
/**
* *_strpbrk - function that searches a string for any of a set of bytes.
* @s: pointer.
* @accept: pointer.
* Return: 0.
*/
char *_strpbrk(char *s, char *accept)
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
		if (accept[i])
		{
			return (s + c);
		}
	}
	return (0);
}
