#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a string,, in reverse,
 * @s: string to be printed
 * Return: Nothing
 */
void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
