#include "lists.h"
/**
 * sum_dlistint - returns sum of the integers
 * in a linked list
 * @head: pointer
 * Return: sum of the digits
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
