#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * Description: the entry point of this program.
 *
 * Return: 0 success always.
 *
 */
int main(void)
{
	int a, b, c;

	for (a = 48; a < 56 ; a++)
	{
		for (b = a + 1; b < 57; b++)
		{
			for (c = b + 1; c < 58; c++)
			{
				putchar((char)a);
				putchar((char)b);
				putchar((char)c);
				if (a != 55)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
