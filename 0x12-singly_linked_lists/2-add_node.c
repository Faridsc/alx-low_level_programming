#include <stdlib.h>
#include <string.h>
#include "defs.h"

/**
 * _strlen - returns the string length
 * @s: the string to check
 * Return: the string length as size_t
 */
unsigned int _strlen(char *s)
{
	char *ss;
	unsigned int len;

	len = 0;
	ss = s;
	if (s == NULL)
	{
		return (0);
	}
	while (*ss != '\0')
	{
		len++;
		ss++;
	}

	return (len);
}

/**
 * add_node - adds a node the list
 * @head: list_t the list head
 * @str: string of the node
 * Return: the new add node or NULL
 */
list_t *add_node(list_t **head, char *str)
{
	list_t *node;

	node = (list_t *)malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->len = strlen(str);
	node->str = str;
	node->next = *head;
	*head = node;
	return (node);
}
