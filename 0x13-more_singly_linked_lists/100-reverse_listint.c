#include <stdio.h>
#include "defs.h"

/**
 * reverse_listint - reverses the list
 * @head: the head of the list
 * Return: the new head of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *t, *tt;

	if (head == NULL || *head == NULL)
		return (NULL);

	tt = NULL;

	while ((*head)->next != NULL)
	{
		t = (*head)->next;
		(*head)->next = tt;
		tt = *head;
		*head = t;
	}

	(*head)->next = tt;

	return (*head);
}
