#include "holberton.h"
/**
* *_strchr - function that locates a character in a string.
* @s: pointer.
* @c: Variable
* Return: a - 1.
*/
char *_strchr(char *s, char c)
{
	int z;
	char *a;

	for (z = 0; s[z] != '\0'; z++)
	{
		if (c == s[z])
		{
			a = (s + z);
		}
	}
	a -= 1; 
	return (a);
}
