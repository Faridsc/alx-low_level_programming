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
	listint_t *node, *t, *tmp;
	int i;

	if (*head == NULL || head == NULL)
		return (NULL);

	t = *head;
	i = idx - 1;
	while (i)
	{
		if (t == NULL)
			return (NULL);
		t = t->next;
		i--;
	}
	node = (listint_t *)malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	tmp = t->next;
	t->next = node;
	node->next = tmp;

	return (node);
}
