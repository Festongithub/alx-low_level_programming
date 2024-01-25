#include "lists.h"

/**
 * print_dlistint - prints elements of a list
 * @h: pointer to node
 * Return: Always 0
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *index = h;
	size_t num = 0;

	while (index)
	{
		printf("%i\n", index->n);
		num++;
		index = index->next;
	}
	return (num);
}
