#include "main.h"

/**
 * print_alphabet - a function to print the lowercase alphabet
 * Description:'prints the lowercase alphabet and a new line char at the end'
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

/**
 * main - the entry point
 * Return: 0 success
 */

int  main(void)
{
	char str[8] = "_putchar";
	int i;

	print_alphabet();
	return (0);
}
