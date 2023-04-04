#include <stdio.h>
#include "defs.h"

/**
 * get_nodeint_at_index - return the list node of index @index
 * @head: the list head
 * @index: the node index to get
 * Return: the node at the index @index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *t;
	unsigned int i;

	i = index;

	if (head == NULL)
		return (NULL);
	t = head;
	while (i)
	{
		if (t == NULL)
			return (NULL);
		t = t->next;
		i--;
	}

	return (t);
}