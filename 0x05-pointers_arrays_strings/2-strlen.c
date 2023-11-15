#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: pointer to strin
 * Return: 1 on success
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen(s + 1));
}
