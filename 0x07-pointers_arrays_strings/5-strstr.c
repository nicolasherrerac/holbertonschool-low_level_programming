#include "holberton.h"
/**
* *_strstr - function that locates a substring.
* @haystack: pointer.
* @needle: pointer.
* Return: 0.
*/
char *_strstr(char *haystack, char *needle)
{
	int c, i, a, size;
	
	for (size = 0; needle[size]; size++)
		;
	for (c = 0; haystack[c]; c++)
	{
		a = 0;
		for (i = 0; needle[i]; i++)
		{
			if (haystack[c + i] == needle[i] && haystack[c + i] != '\0')
			{
				a++;
			}
			else
			{
				a = 0;
				break;
			}
		}
		if (a == size)
			return (&haystack[c]);
	}
	return (0);
}
