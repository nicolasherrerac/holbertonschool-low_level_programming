#include "holberton.h"
/**
* *_strcat - concatenates two strings
* @dest: pointer
* @src: pointer
* Return: 0
*/
char *_strcat(char *dest, char *src)
{
	int c, c1;

	for (c = 0; dest[c] != '\0'; c++)
	{
		;
	}
	for (c1 = 0; src[c1] != '\0'; c1++)
	{
		dest[c + c1] = src[c1];
	}
	dest[c + c1] = '\0';
	return (dest);
}
