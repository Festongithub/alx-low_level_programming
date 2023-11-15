#include <stdio.h>
#include "main.h"

/**
 * factorial - prints factorial of an integer
 * n - integer of a number
 * Return: -1 if n is lower than 0
 * factorial of 0 is 1
 *
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	return (n * factorial(n - 1));
}
