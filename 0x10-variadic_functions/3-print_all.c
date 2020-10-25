#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * c_char - list of strings.
 * @list: list of arguments.
 * Return: Always 0.
 */
void c_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * c_int - list of strings.
 * @list: list of arguments.
 * Return: Always 0.
 */
void c_int(va_list list)
{
	printf("%i", va_arg(list, int));
}
/**
 * c_float - list of strings.
 * @list: list of arguments.
 * Return: Always 0.
 */
void c_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * c_string - list of strings.
 * @list: list of arguments.
 * Return: Always 0.
 */
void c_string(va_list list)
{
	char *k;

	k = va_arg(list, char *);

	if (k == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", k);
	}
}
/**
* print_all - function that prints anything.
* @format: list of arguments.
* Return: Always 0.
*/
void print_all(const char * const format, ...)
{
	check array[] = {
		{"c", c_char},
		{"i", c_int},
		{"f", c_float},
		{"s", c_string},
		{NULL, NULL},
	};

	int i1, i;
	char *coma = "";

	va_list list;

	va_start(list, format);
	i1 =  0;
	while (format && format[i1])
	{
		i = 0;
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
