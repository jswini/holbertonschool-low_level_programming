#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - counts number of nodes in a linked list
 * @h: first node of list
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int count;

	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}
