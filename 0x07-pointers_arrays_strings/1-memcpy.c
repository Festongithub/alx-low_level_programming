#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _memcpy - function copies n bytes from
 * memory area src to memory area dest
 * @dest: pointer to address
 * @src: pointer to copy
 * @n: integer
 * Return: Always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
