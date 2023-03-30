#include <stdio.h>
#include "defs.h"

/**
 * print_len - prints the full content of a singly linked list
 * @h: list_t list to print
 * Return: the size of the list
 */

size_t list_len(const list_t *h)
{
	size_t size;

	size = 1;
	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
