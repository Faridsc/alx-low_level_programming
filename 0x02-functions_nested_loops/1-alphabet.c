#include "main.h"
/**
 * print_alphabet - a function to print the alphabet in loawercase
 * Return: void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	putchar('\n');
}

/**
 * main - the entry point
 * Return: 0 success
 */
int  main(void)
{
	print_alphabet();
	return (0);
}
