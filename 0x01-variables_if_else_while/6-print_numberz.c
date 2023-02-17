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
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
