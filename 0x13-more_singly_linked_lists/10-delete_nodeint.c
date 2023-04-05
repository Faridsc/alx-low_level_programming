#include <stdlib.h>
#include "defs.h"

/**
 * delete_nodeint_at_index - deletes a node at the index @index
 * @head: the list head pointer
 * @index: the index where to delete the node
 * Return: 1 if success -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = *head;
	listint_t *delete = *head;
	unsigned int i;
	unsigned int c = 0;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		*head = delete->next;
		free(delete);
		return (1);
	}

	i = index - 1;
	while (node && c != i)
	{
		c++;
		node = node->next;
	}

	if (c == i && node)
	{
		delete = node->next;
		node->next = delete->next;
		free(delete);
		return (1);
	}

	return (-1);
}
