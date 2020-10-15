#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* string_nconcat - function that concatenates two strings.
* @s1: string number 1.
* @s2: string number 2.
* @n: number of characters.
* Return: y.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *y;
	unsigned int c, c1, p, p1;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (c = 0; s1[c] != '\0'; c++)
		;
	for (c1 = 0; s2[c1] != '\0'; c1++)
		;
	if (n >= c1)
	{
		n = c1;
	}
	y = malloc(c + (n + 1));

	if (y == NULL)
	{
		return (NULL);
	}
	for (p = 0; s1[p] != '\0'; p++)
	{
		y[p] = s1[p];
	}
	for (p1 = 0; p1 < n; p1++, p++)
	{
		y[p] = s2[p1];
	}
	y[p] = '\0';
	return (y);
}
