#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: binary number
 * @index:position of n
 * Return: Allways 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 1UL << index;

	return ((n & i) ? 1 : 0);
}
