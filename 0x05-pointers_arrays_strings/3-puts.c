#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _puts - prints string followed
 * by  a new line
 * @str: pointer to string
 * Return : 1 on success
 */
void _puts(char *str)
{
	if (*str == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*str);
	_puts(str + 1);
}
