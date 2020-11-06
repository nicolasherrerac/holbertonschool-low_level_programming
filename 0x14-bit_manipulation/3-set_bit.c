#include "holberton.h"
/**
 * set_bit - Set the bit object.
 * @n: number.
 * @index: index of each bit.
 * Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n | (1 << index);

	return (1);
}
