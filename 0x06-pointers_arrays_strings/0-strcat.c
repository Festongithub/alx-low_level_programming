#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: pointer to first address
 * @src: pointer to string
 * Return: always 0
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
