#include "holberton.h"
/**
* _strcmp -  compares two strings.
* @s1: pointer
* @s2: pointer
* Return: 0
*/
int _strcmp(char *s1, char *s2)
{
	int c;

	for (c = 0; s1[c] && s1[c] == s2[c]; c++)
	{
		s1[c]++;
		s2[c]++;
	}
	return (s1[c] - s2[c]);
}
