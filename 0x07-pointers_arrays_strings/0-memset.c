#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_memset -  fills memory with a constant byte
 * @s: pointer to address
 * @b: integer
 * @n: integer
 *
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
