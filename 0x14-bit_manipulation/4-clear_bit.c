#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer
 * @index: position of n
 * Return: Always 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = ~(1UL << index);

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	else
	{
		*n &= i;
	}
	return (1);
}
