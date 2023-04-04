#include <stdlib.h>
#include "defs.h"

/**
 * free_listint2 - frees the list memory
 * @head: the list head ponter
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;
	if (*head == NULL)
	{
		next = NULL;
		*head = NULL;
		head = NULL;
		return;
	}
	else
	{
		next = (*head)->next;
		free(*head);
		free_listint2(&next);
	}
}
