#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks for digit
 * from 0 through 9
 * @c: letter
 * Return: 1 if c is digit
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
