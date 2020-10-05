#include "holberton.h"

char *_strstr(char *haystack, char *needle)
{
	int c, i;

	for (c = 0; haystack[c]; c++)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[c + i] == needle[i] && haystack[c + i] != '\0')
			{
				c = 0;
				break;
			}
			else
			{
				c++;
			}
		}
		if (c == i)
			return (&haystack[c + 2]);
	}
	return (0);
}
