#include "holberton.h"
/**
* reverse_array - reverses the content of an array of integers.
* @a: pointer
* @n: Variable
* Return: 0
*/
void reverse_array(int *a, int n)
{
	int c, t;

	n--;
	for (c = 0; c < n; c++, n--)
	{
		t = a[c];
		a[c] = a[n];
		a[n] = t;
	}
}
