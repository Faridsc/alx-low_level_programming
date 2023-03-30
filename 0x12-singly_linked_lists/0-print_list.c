#include <stdio.h>
#include "defs.h"

/**
 * print_list - prints the full content of a singly linked list
 * @h: list_t list to print
 * Return: the size of the list
 */

size_t print_list(const list_t *h)
{
	size_t size;

	size = 0;
	if (h == NULL)
		return (0);
	while (h)
	{
		size++;
		printf("[%d] %s\n", (h->str == NULL) ? 0 : h->len,
			   (h->str == NULL) ? "(nil)" : h->str);

		if (h->next == NULL)
			break;
		h = h->next;
	}
	return (size);
}