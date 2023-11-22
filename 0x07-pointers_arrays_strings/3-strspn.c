#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to address
 * @accept: pointer to address
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	i = strspn(s, accept);
	return (i);
}
