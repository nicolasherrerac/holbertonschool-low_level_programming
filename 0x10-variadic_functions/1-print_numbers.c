#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_numbers - function that prints numbers, followed by a new line.
* @n: arguments.
* @separator: string separator.
* Return: always 0.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(valist);

}
