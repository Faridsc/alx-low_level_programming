#include "main.h"

void print_alphabet(void);

/**
 * main - the entry point
 * Return: 0 success
 */
int  main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - the print_alphabet function declaration
 * Return: void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
