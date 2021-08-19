#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - gets the data at node index
 * @head: first node of list
 * @index: location of data to find where index starts at 0
 *
 * Return: data found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current;

	if (head == NULL)
		return (NULL);
	current = head;
	while (current != NULL)
	{
		if (i == index)
			return (current);
		i++;
		current = current->next;
	}
	return (current);
}
