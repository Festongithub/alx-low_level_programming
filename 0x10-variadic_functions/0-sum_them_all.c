#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - prints sum of all parameters
 * @n: integer
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	if (n == 0)
	{
		return (0);
	}


	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, const unsigned int);
	}
	va_end(args);
	return (sum);
}
