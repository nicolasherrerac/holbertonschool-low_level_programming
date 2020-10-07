#include "holberton.h"
/**
* root - function root.
* @n: Variable.
* @i: count.
* Return: i.
*/
int root(int n, int i)
{
	if ((i * i) < n)
	{
		i = root(n, i + 1);
	}
	else if ((i * i) > n)
	{
		return (-1);
	}
	return (i);
}
/**
* _sqrt_recursion - function that returns the natural square root of a number.
* @n: Variable.
* Return: root
*/
int _sqrt_recursion(int n)
{
	return (root(n, 1));
}
