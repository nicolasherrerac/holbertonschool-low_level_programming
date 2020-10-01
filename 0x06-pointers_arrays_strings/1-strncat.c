#include "holberton.h"
/**
* *_strncat - concatenates two strings
* @dest: pointer
* @src: pointer
* @n: Variable
* Return: 0
*/
char *_strncat(char *dest, char *src, int n)
{
	int c, c1;

	for (c = 0; dest[c] != '\0'; c++)
	{
		;
	}
	for (c1 = 0; src[c1] != '\0'; c1++)
	{
		if (c1 < n)
		dest[c + c1] = src[c1];
	}
	dest[c + c1] = '\0';
	return (dest);
}
