#include <stdlib.h>
#include "defs.h"

/**
 * free_list - frees the list
 * @head: the list to free
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *t;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		t = head;
		head = head->next;
		free(t);
	}
}