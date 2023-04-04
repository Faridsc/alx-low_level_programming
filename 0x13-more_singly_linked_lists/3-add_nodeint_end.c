#include <stdio.h>
#include <stdlib.h>

#include "defs.h"

/**
 * add_nodeint_end - adds a node at the end of the list @head
 * @head: the pointer to the list head point
 * @n: the int element of the list node
 * Return: the newly added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *t, *tmp;

	t = (listint_t *)malloc(sizeof(listint_t));
	if (t == NULL)
		return (NULL);

	t->n = n;
	t->next = NULL;

	if (head == NULL || *head == NULL)
	{
		*head = t;
		return (t);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = t;
	return (t);
}
