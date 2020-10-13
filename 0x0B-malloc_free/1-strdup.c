#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strdup - function that print a duplicate array.
* @str: string "Holberton".
* Return: c.
*/
char *_strdup(char *str)
{
	char *c;
	int i, o;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
		;

	c = malloc(i * sizeof(char));

	if (c == NULL)
	{
		return (NULL);
	}

	for (o = 0; str[o] != '\0'; o++)
	{
		c[o] = str[o];
	}
	return (c);

}
