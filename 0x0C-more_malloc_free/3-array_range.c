#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* array_range - function that creates an array of integers.
* @min: value minimun.
* @max: valie maximun.
* Return: c.
*/
int *array_range(int min, int max)
{
	int *c;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	c = malloc((max - min + 1) * sizeof(int));

	if (c == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; min++, i++)
	{
		c[i] = min;
	}
	return (c);
}
