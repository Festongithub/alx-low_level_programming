#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *string_toupper - changes letters to capital
 * @str: pointer to address
 * Return:Always 0
 */

char *string_toupper(char *str)
{
	int i  = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
		}
		i++;
	}
	return (str);
}
