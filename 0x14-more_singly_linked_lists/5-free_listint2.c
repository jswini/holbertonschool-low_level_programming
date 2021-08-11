#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees a linked list of ints, leaving head as null
 * @head: start of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next;

	if (head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	free(next);
	*head = NULL;
}
