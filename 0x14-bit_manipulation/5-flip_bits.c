#include "holberton.h"
/**
 * flip_bits - flip to get from one number to another.
 * @n: first node.
 * @m: second node.
 * Return: num.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num;
	int c = 0;

	num = n ^ m;

	while (num)
	{
		c += num & 1;
		num = num >> 1;
	}

	return (num);
}
