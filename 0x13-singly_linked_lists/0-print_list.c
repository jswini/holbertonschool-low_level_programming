#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - prints a linked list
 * @h: head of the list
 *
 * Return: number of nodes in the list printed
 */
size_t print_list(const list_t *h)
{
	int count;
	char *error = "[0] (nil)";

	if (h == NULL)
	{
		printf("%s", error);
		return (0);
	}
	for (count = 0; h != NULL; count++)
	{
		if (h->str == NULL)
			printf("%s\n", error);
      		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (count);
}
