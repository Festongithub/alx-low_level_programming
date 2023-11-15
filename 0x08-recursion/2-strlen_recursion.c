#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - prints the length of a string
 * @s:pointer to string
 * Return:NULL if string is empty
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
