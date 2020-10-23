#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *
 *
 *
 */
void c_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 *
 *
 *
 */
void c_int(va_list list)
{
	printf("%i", va_arg(list, int));
}
/**
 *
 *
 *
 */
void c_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 *
 *
 *
 */
void c_string(va_list list)
{
	char *s;

	s = va_arg(list, char *);

	if (s != NULL)
	{
		printf("%s", s);
	}
	else
	{
		printf("(nil)");
	}
}
void print_all(const char * const format, ...)
{
	check array[] = {
		{"c", c_char},
		{"i", c_int},
		{"f", c_float},
		{"s", c_string},
		{NULL, NULL},
	};

	int i = 0;
	int i1 = 0;
	char *coma = "";

	va_list list;

	va_start(list, format);

	while (format != NULL && format[i1] != '\0')
	{
		while (array[i].check != NULL)
		{
			if (format[i1] == *array[i].check)
			{
				printf("%s", coma);
				array[i].f(list);
				coma = ", ";
				break;
			}
			i++;
		}
		i1++;
	}
	printf("\n");
	va_end(list);
}

