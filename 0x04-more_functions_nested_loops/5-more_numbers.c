#include "main.h"

/**
 * more_numbers - print a list of numbers from 0 to 14 ten times
 */
void more_numbers(void)
{
	char c, cc;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = '0', cc = '0'; c <= '9'; c++)
		{
			if (cc == '0')
				_putchar(c);
			if (c == '9')
			{
				c = '1';
				_putchar('1');
				_putchar(cc);
				cc++;
			}
			if (cc == '5')
				break;
		}
		_putchar('\n');
	}
}
