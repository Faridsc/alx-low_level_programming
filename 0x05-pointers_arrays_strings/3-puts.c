#include "main.h"

/**
 * _puts - a function to print a string to the std output
 * @s: the string pointer
 */
void _puts(char *s)
{

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}

}
