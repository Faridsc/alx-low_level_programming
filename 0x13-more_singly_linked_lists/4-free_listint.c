#include <stdlib.h>
#include "defs.h"

/**
 * free_listint - frees the list memory
 * @head: the list head ponter
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	if (head == NULL)
	{
		next = NULL;
		return;
	}
	else
	{
		next = head->next;
		free(head);
		free_listint(next);
	}
}
