#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* alloc_grid - print a bidimensinal array.
* @width: rows.
* @height: colums.
* Return: c.
*/
int **alloc_grid(int width, int height)
{
	int **c;
	int h, w, o;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	c = malloc(height * sizeof(int *));

	if (c == NULL)
	{
		return (NULL);
	}

	for (h = 0; h < height; h++)
	{
		c[h] = malloc(width * sizeof(int));
		if (c[h] == NULL)
		{
			for (o = 0; o < h; o++)
			{
				free(c[o]);
			}
			free(c);
			return (NULL);
		}
		for (w = 0; w < width; w++)
		{
			c[h][w] = 0;
		}
	}
	return (c);
}
