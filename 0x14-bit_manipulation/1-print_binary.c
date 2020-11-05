#include "holberton.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: number.
 * Return: Always 0.
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
