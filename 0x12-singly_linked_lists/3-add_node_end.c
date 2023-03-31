#include <stdlib.h>
#include "defs.h"
#include <string.h>

/**
 * add_node_end - adds a node to the end
 * @head: a list_t pointer
 * @str: the value of list_t.str
 * Return: a list_t pointer to the head node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *t;

	t = *head;

	node = (list_t *)malloc(sizeof(list_t));
	if (!node)
		return NULL;
	node->len = strlen(str);
	node->str = strdup(str);
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return node;
	}
	while (t->next != NULL)
		t = t->next;
	t->next = node;
	return node;
}