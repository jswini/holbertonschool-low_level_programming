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
	int count, i;
	char *error = "[0] (nil)";

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
	{
		if (h->str == NULL)
		{
			for (i = 0; error[i] != '\0'; i++)
				_putchar(error[i]);
			_putchar('\n');
		}
		else
		{
			_putchar('[');
			_putchar(h->len + '0');
			_putchar(']');
			_putchar(' ');
			for (i = 0; h->str[i] != '\0'; i++)
			{
				_putchar(h->str[i]);
			}
			_putchar('\n');
		}
		h = h->next;
	}
	return (count);
}
