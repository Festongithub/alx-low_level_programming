#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints string
 * new line
 * @s: pointer to the string
 * Return:NULL if string is empty
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
