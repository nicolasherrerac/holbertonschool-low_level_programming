#include "function_pointers.h"
/**
* array_iterator - print each number of the array.
* @array: array of integers.
* @size: size of array.
* @action: pointer pointing to a function.
* Return: always 0.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t c;

	if (array != NULL && action)
	{
		for (c = 0; c < size; c++)
		{
			action(array[c]);
		}
	}
}
