#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* dlistint_len - output the contents of a doubly linked list
* @h: head node of list to print
*
* Return: number of nodes to print
*/
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}
