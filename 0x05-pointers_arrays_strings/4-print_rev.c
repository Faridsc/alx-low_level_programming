#include "main.h"
/**
 * print_rev - prints the reverse string of a given string
 * @s: a char array
 */
void print_rev(char *s)
{
	char *rev_s;
	char *tmp;

	tmp = s;
	while (*s != '\0')
		s++;
	rev_s = s - 1;
	while (rev_s >= tmp)
	{
		_putchar(*rev_s);
		rev_s--;
	}
	_putchar('\n');
}
