#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *reverse_listint -  reverses a listint_t linked list
 * @head: pointer
 * Return: Always 0
 *
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *previous = NULL;

	while (current != NULL)
	{
		listint_t *next = current->next;

		current->next = previous;
		previous = current;
		current = next;
	}
	*head = previous;
	return (*head);
}
