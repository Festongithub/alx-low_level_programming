#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * reverse_array - reverses a string
 * @a: pointer to string
 * @n: number of elements in array
 *
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		int temp = a[start];

		a[start] = a[start];
		a[end] = temp;
		start++;
		end--;
	}
}
