#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
* create_array - function that print array.
* @size: number of prints.
* @c: character that print.
* Return: s.
*/
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(size * sizeof(char));

	if (size == 0)
	{
		return ('\0');
	}
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
