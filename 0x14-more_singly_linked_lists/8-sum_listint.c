#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - sums the data element of each node of the list
 * @head: start of the list
 *
 * Return: sum of the data elements
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	int data;
	listint_t *current;

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
