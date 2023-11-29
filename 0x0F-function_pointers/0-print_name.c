#include <stdio.h>

/**
 * print_name - prints name of  string
 * @name: character to print
 * @f:pointer to function
 * Return: Always 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
