#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>

typedef struct check
{
	char *check;
	void (*f)(va_list);
}check;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void c_char(va_list list);
void c_int(va_list list);
void c_float(va_list list);
void c_string(va_list list);

#endif
