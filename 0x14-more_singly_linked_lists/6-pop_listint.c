#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - removes the first node of a linked list
 * @head: node to remove
 *
 * Return: data from node removed
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if ((*head == NULL) || (head == NULL))
		return ('\0');
	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (data);
}
