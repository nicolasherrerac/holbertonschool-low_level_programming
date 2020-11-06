#include "holberton.h"
/**
 * flip_bits - flip to get from one number to another.
 * @n: first node.
 * @m: second node.
 * Return: num.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int teamf;
	int num = 0;

	teamf = n ^ m;

	while (teamf)
	{
		num += teamf & 1;
		teamf = teamf >> 1;
	}

	return (num);
}
