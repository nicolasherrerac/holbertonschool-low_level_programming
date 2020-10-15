#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	c = malloc(size * nmemb);

	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size * nmemb; i++)
	{
		c[i] = 0;
	}
	return (c);
}
