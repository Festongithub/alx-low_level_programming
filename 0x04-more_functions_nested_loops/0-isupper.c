#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _isupper - converts letters to uppercase
 * @c: letterr to capitalize
 * Return: 1 if C is uppercase
 * otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
