#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_dlistint - produces the sum of data elements in a linked list
 * @head: start of the list
 *
 * Return: the sum produced
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	int data;
	dlistint_t *current;

	if (head == NULL)
		return (0);
	current = head;
	while (current != NULL)
	{
		data = current->n;
		sum += data;
		current = current->next;
	}
	return (sum);
}
