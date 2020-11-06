#include "holberton.h"
/**
 * get_endianness - checks the endianness.
 * Return: int*c
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return ((int)*c);
}
