#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strpbrk - function locates the first occurrence
 * in the string s of any
 * of the bytes in the string accept
 * @s: pointer to address
 * @accept: pointer to s
 *
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
	char *c;

	c = strpbrk(s, accept);
	return (c);
}
