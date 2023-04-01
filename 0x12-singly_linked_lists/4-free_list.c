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

	while (head != NULL)
	{
		t = head;
		head = head->next;
		if (head->str)
		{
			free(head->str);
		}

		free(t);
	}
	free(head);
}
