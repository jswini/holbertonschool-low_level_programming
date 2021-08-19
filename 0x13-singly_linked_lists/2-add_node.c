#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds a node to the head of a linked list
 * @head: first node of the list
 * @str: string to add to the list
 *
 * Return: address of the new node if success, NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int i;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{}
	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
