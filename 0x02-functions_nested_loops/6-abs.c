#include "holberton.h"
/**
* _abs - Write a function that computes the absolute value of an integer.
* @n: the character to check
* Return: 0
*/
int _abs(int n)
{

	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
