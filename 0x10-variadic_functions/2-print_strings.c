#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_strings - function that prints strings, followed by a new line.
* @separator: string separator.
* @n: arguments.
* Return: always 0.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *c;

	va_start(list, n);

	for (i = 0 ; i < n; i++)
	{
		c = va_arg(list, char *);

		if (c != NULL)
			printf("%s", c);
		else
			printf("(nil)");
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(list);
}
