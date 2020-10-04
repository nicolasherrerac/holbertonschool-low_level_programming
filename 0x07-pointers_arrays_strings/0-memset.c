#include "holberton.h"
/**
* *_memset - function that fills memory with a constant byte.
* @s: pointer.
* @b: Variable.
* @n: Variable.
* Return: *s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		*(s + c) = b;
	}
	return (s);
}
