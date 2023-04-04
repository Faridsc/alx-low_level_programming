#include <stdio.h>
#include <stdlib.h>
#include "defs.h"

/**
 * pop_listint - pops the head of the list
 * @head: the list head
 * Return: the poped list head' data
 */
int pop_listint(listint_t **head)
{
	listint_t *t;
	int d;

	if (head == NULL)
		return (0);

	t = (*head)->next;
	d = (*head)->n;
	free(*head);
	*head = t;
	head = &t;
	return (d);
}
