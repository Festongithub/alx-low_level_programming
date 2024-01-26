#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: binary number
 * Return: binary number
 */
void print_binary(unsigned long int n)
{
	for (unsigned int i = 31; i >= 0; i--)
	{
		unsigned int mask = (1 << i);

		if (n & mask)
			printf("1");
		else
			printf("0");
	}
}
