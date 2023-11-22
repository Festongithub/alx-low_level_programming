#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: pointer to address
 * @c: character to address
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	char *t;

	t = strchr(s, c);
	return (t);
}
