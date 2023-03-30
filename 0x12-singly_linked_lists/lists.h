#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include "defs.h"

int _putchar(char);

size_t _strlen(char *);

size_t print_list(const list_t *h);

/**
 * _strlen - returns the string length
 * @s: the string to check
 * Return: the string length as size_t
 */
size_t _strlen(char *s)
{
	char *ss;
	size_t len;

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

#endif
