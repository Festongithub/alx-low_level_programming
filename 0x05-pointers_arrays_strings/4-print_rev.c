#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_rev - prints string in reverse
 * @s: pointer to string
 * Return:1 on success
 */
void print_rev(char *s)
{
	int len = strlen(s);

	if (s == NULL)
	{
		return;
	}

	for (int i = len - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
