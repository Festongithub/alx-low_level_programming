#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: integer
 * @m : integer to be flippeed
 * Return: Always 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	int count = 0;

	while (x)
	{
		count += x & 1;
		x >>= 1;
	}
	return (count);
}
