#include <stdio.h>
#include "lists.h"
/**
 * listint_len - counts the number of notes in a linked list of ints
 * @h: first node of list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int count;

	for (count = 0; h != NULL; count++)
	{
		if (h->n == '\0')
			return (0);
		h = h->next;
	}
	return (count);
}
