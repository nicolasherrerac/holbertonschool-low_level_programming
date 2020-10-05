#include "holberton.h"
#include <stdio.h>
/**
* print_diagsums - function that prints the sum of the two diagonals.
* @a: pointer.
* @size: variable.
* Return: always 0.
*/
void print_diagsums(int *a, int size)
{
	int c, i;
	int suma, suma1;

	suma = 0;
	suma1 = 0;

	for (c = 0; c < size * size; c += size + 1)
	{
		suma += a[c];
	}
	for (i = size - 1; i < (size * size) - 1; i += size - 1)
	{
		suma1 += a[i];
	}
	printf("%d, %d\n", suma, suma1);
}
