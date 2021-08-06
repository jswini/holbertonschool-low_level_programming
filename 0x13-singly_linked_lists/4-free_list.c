 #include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees allocation of memory
 * @head: linked list to free
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *cur_node;
	list_t *next_node;

	if (head == NULL)
		return;
	cur_node = head;
	while (cur_node != NULL)
	{
		next_node = cur_node->next;
		free(cur_node->str);
		free(cur_node);
		cur_node = next_node;
	}
	free(next_node);
}
