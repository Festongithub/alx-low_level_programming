#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  *malloc_checked - allocate  memory using malloc
 *  @b: integer
 *  if mallocs fails malloc_checked should cause normal process termination
 *  Return: Always 0
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
