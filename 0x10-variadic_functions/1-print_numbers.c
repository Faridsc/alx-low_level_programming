#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints all the numbers @n
 * @separator: the spearate each printed num
 * @n: the number of variadic args
 * Return: the sum
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int arg;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(ap, int);
		printf("%d%s", arg, (i == n - 1) ? "\n" : (separator) ? separator
															  : "");
	}
	va_end(ap);
}
