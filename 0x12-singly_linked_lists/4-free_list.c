#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees the list_t list
 * @head: pointer to list_t
 * Return : Always 0
 */
void free_list(list_t *head)
{
	list_t *check;

	while (head)
	{
		check = head->next;
		free(head->next);
		free(head);
		head = check;
	}
}
