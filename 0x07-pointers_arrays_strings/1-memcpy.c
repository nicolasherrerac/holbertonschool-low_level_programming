#include "holberton.h"
/**
* *_memcpy - function that copies memory area.
* @dest: pointer.
* @src: pointer.
* @n: Variable.
* Return: dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		dest[c] = src[c];
	}
	return (dest);
}
