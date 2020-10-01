#include "holberton.h"
/**
* *_strncpy - copies a string.
* @dest: pointer
* @src: pointer
* @n:Variable
* Return: 0
*/
char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; c < n && src[c] != '\0'; c++)
		dest[c] = src[c];
	for (; c < n; c++)
		dest[c] = '\0';

	return (dest);
}
