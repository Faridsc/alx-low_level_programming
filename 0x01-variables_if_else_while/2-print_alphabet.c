#include<stdio.h>

/**
 * main - the entry point
 *
 * Description: 'the description of the main function'
 *
 * Return: 0  success
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
