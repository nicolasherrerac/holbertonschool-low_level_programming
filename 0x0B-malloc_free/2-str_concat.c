#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* str_concat - function that concatenates 2 strings.
* @s1: string number 1.
* @s2: string number 2.
* Return: y.
*/
char *str_concat(char *s1, char *s2)
{
	char *y;
	int c, c1, p, p1;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	for (c = 0; s1[c] != '\0'; c++)
		;
	for (c1 = 0; s2[c1] != '\0'; c1++)
		;

	y = malloc((c) + (c1 + 1));

	if (y == NULL)
	{
		return (NULL);
	}
	for (p = 0; p < c; p++)
	{
		y[p] = s1[p];
	}
	for (p1 = 0; p1 < c1; p1++, p++)
	{
		y[p] = s2[p1];
	}
	y[p] = '\0';
	return (y);
}
