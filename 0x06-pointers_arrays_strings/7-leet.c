#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * *leet - encodes letters to integers
 * @str: pointer to address
 *
 * Return: Always 0
 */

char *leet(char *c)
{
	char *cp = c;
	char  key[] = {'A', 'E', 'O' , 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*c)
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
			if (*c == key[i] || *c == key[i] + 32)
			{
				*c = 48 + value[i];
			}
		}
		c++;
	}

	return (cp);
}
