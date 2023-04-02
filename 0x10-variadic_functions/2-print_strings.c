#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print all the strings
 * @separator: to separate the strings
 * @n: the number of strings
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list l;
	unsigned int i;
	char *s;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(l, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(l, char *);
		if (s == NULL)
			s = "(nil)";
		printf("%s%s", s, (i == n - 1) ? "\n" : (separator) ? separator
															: "");
	}
}
