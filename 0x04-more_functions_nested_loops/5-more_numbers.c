#include "main.h"

/**
 * more_numbers - print a list of numbers from 0 to 14 ten times
 */
void more_numbers(void)
{
	char c, cc, tmp;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = '0', cc = '0'; c <= '>'; c++)
		{
			tmp = (c <= '9') ? c : '1';
			_putchar(tmp);
			if (c > '9')
			{
				_putchar(cc);
				cc++;
			}
			if (cc == '5')
				break;
		}
		_putchar('\n');
	}
}
