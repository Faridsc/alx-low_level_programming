#include <stdlib.h>
#include "defs.h"

/**
 * free_listint2 - frees the list memory
 * @head: the list head ponter
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *next, *actual;

	if (!head || !(*head))
		return;

	next = (*head)->next;
	actual = *head;
	while (next)
	{
		free(actual);
		actual = next;
		next = actual->next;
	}
	free(actual);
	*head = NULL;
}
