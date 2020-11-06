#include "holberton.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number.
 * @index: index of each bit.
 * Return: value of bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
