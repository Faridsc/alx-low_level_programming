#include <stdio.h>
#include <stdlib.h>
#include "defs.h"

/**
 * insert_nodeint_at_index - inserts a node to the list at the index @idx
 * @head: the list head
 * @idx: the index where to insert a new node
 * @n: the new node data
 * Return: the new added node or NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *t;

	if (!head || !(*head))
		return (NULL);
	if (idx == 0)
	{
		node = (listint_t *)malloc(sizeof(listint_t));
		if (!node)
			return (NULL);
		node->n = n;
		node->next = *head;
		*head = node;
	}

	t = *head;
	while (idx - 1)
	{
		if (!t)
			return (NULL);
		t = t->next;
		--idx;
	}
	node = (listint_t *)malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = t->next;
	t->next = node;
	return (node);
}
