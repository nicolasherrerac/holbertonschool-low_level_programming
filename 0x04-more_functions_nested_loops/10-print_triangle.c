#include "holberton.h"
/**
* print_triangle - prints a triangle.
* @size: Variable of triangle
* Return: 0
*/
void print_triangle(int size)
{
	int colum, rows, res;

	res = size;

	if (size <= 0)
		_putchar('\n');
	for (colum = 0; colum < size; colum++)
	{
		res--;
		for (rows = 0; rows < size; rows++)
		{
			if (rows < res)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
	_putchar('\n');
	}
}
