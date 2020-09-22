#include "holberton.h"
/**
* print_last_digit - Write a function that prints the last digit of a number.
* @n: the character to check
* Return: 0
*/
int print_last_digit(int n)
{
	if (n <= 0)
	{
		_putchar((-n % 10) + '0');
		return (-n % 10);
	}
	else
	{
		_putchar((n % 10) + '0');
		return (n % 10);
	}
	return (0);
}
