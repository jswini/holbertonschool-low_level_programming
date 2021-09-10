#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - frees a doubly linked list
 * @head: start of list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *next;

	if (head == NULL)
		return;
	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	free(next);
}