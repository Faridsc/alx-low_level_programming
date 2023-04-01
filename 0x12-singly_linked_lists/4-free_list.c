#include <stdlib.h>
#include "defs.h"

/**
 * free_list - frees the list
 * @head: the list to free
 * Return: void
 */

void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
