#include <stdio.h>
#include "defs.h"

/**
 * sum_listint - returns the sums of all list @head node's data
 * @head: the lisst head
 * Return: the sum
 *
 */
int sum_listint(listint_t *head)
{
	listint_t *t;
	int sum;

	if (head == NULL)
		return (0);

	sum = 0;
	t = head;

	while (t)
	{
		sum += t->n;
		t = t->next;
	}
	return (sum);
}
