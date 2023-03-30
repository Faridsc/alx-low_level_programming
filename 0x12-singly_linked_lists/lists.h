#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include "defs.h"

int _putchar(char);

size_t _strlen(char *);

size_t print_list(const list_t *h);

size_t list_len(const list_t *h);

list_t *add_node(list_t **head, const char *str);

#endif