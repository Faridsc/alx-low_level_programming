#include "main.h"

/**
 * _puts_recursion - print a string with a recursion way
 * @s: a string to print
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);

}
