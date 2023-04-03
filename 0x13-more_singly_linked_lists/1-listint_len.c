#include <stdio.h>
#include "defs.h"

/**
 * listint_len - return the length of @h
 * @h: the list head ponter
 * Return: the size of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t l;
	if (h == NULL)
		return (0);

	l = 1;
	while (h->next != NULL)
	{
		h = h->next;
		l++;
	}
	return (l);
}
