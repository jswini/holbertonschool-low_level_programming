#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint - adds a node to the start of the list
 * @head: first node of the list
 * @n: valude to add to node
 *
 * Return: address of node if success, NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = (*head);
	new_node->prev = NULL;
	if (head != NULL)
		(*head) = new_node;
	(*head)->prev = new_node;
	return (new_node);
}
