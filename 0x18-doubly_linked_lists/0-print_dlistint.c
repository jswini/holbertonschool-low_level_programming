#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
* print_dlistint - output the contents of a doubly linked list
* h: head node of list to print
*
* Return: number of nodes to print
*/

size_t print_dlistint(const dlistint_t *h)
{
	int count;
	
	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
