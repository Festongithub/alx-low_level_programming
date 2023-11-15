#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_rev - prints string in reverse
 * @s: pointer to string
 * Return:1 on success
 */
void print_rev(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	print_rev(s + 1);
	putchar(*s);
}
