#include <stdio.h>
#include "defs.h"
/**
 * print_listint - prints all the @h int elements
 * @h: listint_t header
 * Return: size_t as the size of the list
 */
size_t print_listint(const listint_t *h)
{
	size_t l;

	if (h == NULL)
	{
		printf("\n");
		return (0);
	}
	l = 0;
	while (1)
	{
		printf("%d\n", h->n);

		l++;
		if (h->next == NULL)
			break;
		h = h->next;
	}
	return (l);
}
