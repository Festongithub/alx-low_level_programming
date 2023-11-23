#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocate  memory for an array
 * using malloc
 * @nmemb: an array
 * @size: bytes allocated
 *
 * Return: Always 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	c = malloc(nmemb * size);

	if (c != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			c[i] = 0;
		return (c);
	}
	else
		return (NULL);
}
