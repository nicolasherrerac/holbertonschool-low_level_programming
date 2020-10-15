#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* malloc_checked - function that allocates memory using malloc.
* @b: memory that i need allocated.
* Return: 0.
*/
void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);

	if (c == NULL)
	{
		exit(98);
	}
	return (c);
}
