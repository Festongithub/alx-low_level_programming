#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_strstr - function finds the first occurrence
 * of the substring needle in the string haystack.
 * The terminating null bytes (\0) are not compared
 *
 * @needle: pointer to haystack
 * @haystack: pointer to address
 *
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *c;

	c = strstr(haystack, needle);
	return (c);
}
