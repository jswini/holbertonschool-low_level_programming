#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees a linked list of ints
 * @head: start of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current;
	listint_t *next;

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
