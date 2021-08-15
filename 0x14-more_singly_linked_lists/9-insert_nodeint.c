#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - adds a node to a linked list at a specific point
 * @head: start of list
 * @idx: index where node should be added
 * @n: data to add to node
 *
 * Return: address of node if success, NULL if fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *new_node;
	unsigned int i = 0;

	if (!head || (*head == NULL && idx > 0))
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	if (idx == 0)
	{
		new_node->n = n;
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
	else
	{
		current = *head;
		for (i = 1; current && i < idx; i++)
			current = current->next;
		if (i != idx)
		{
			free(new_node);
			return (NULL);
		}
		else
		{
			new_node->n = n;
			new_node->next = current->next;
			current->next = new_node;
		}
	}
	return (new_node);
}
