#include "holberton.h"
#include <stdio.h>
/**
* print_array - prints n elements of an array of integers.
* @a: pointer
* @n: variable
* Return: 0
*/
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		if (c < n - 1)
			printf("%d, ", a[c]);
		else
			printf("%d", a[c]);
	}
	printf("\n");
}
