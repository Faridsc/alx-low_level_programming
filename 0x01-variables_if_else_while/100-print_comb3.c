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
	int a, b;

	for (a = 48; a < 57 ; a++)
	{
		for (b = 49; b < 58; b++)
		{
			if (a == b || a > b)
				continue;
			else
			{
				putchar((char)a);
				putchar((char)b);
			}
			if (a != 56)
			{
				putchar(',');
				putchar(' ');
			}
			else
				break;

		}
	}
	putchar('\n');
	return (0);
}
