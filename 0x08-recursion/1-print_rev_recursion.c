#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 * followed by  new line
 * @s: pointer to string
 * Return:NULL if string is empty
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
