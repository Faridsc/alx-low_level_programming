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
	int c = 48;

	while (c <= 57)
	{
		putchar((char)c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
