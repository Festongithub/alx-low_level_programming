#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - prints square root of a number
 * @n: integer
 * Return: -1 if n does not have a natural number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		for (int i = 1; i <= n / 2; i++)
	{
		if (i * i == n)
		{
			return (i);
		}
	}
	return (-1);
}
}
