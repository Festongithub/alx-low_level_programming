#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: he string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: Always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *num;
	unsigned int i;
	va_list test;

	if (separator == NULL ||  *separator == 0)
	{
		num = "";
	}
	else
	{
		num = (char *)separator;
	}
	va_start(test, n);
	if (n > 0)
	{
		printf("%d\n", va_arg(test, int));
	}
	for (i = 0; i < n; i++)
	{
		printf("%s%d", num, va_arg(test, int));
	}
	printf("\n");
	va_end(test);
}
