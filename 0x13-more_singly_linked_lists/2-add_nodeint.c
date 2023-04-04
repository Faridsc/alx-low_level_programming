#include <stdio.h>
#include <stdlib.h>

#include "defs.h"

/**
 * add_nodeint - adds a node at the begenning of the list @head
 * @head: the pointer to the list head point
 * @n: the int element of the list node
 * Return: the newly added node that becomes the head
 * of the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *t;

	t = (listint_t *)malloc(sizeof(listint_t));
	if (t == NULL)
		return (NULL);
	t->n = n;
	t->next = *head;
	*head = t;
	return (t);
}
