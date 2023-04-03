#include <stdio.h>
#include <stdarg.h>

/**
 * formating - prints the appropriate string
 * @c: a char may be i c f s as types to print
 * Return: a formatted string
 */
char *formating(char c)
{
	switch (c)
	{
	case 'i':
		return ("%d%s");
	case 'f':
		return ("%f%s");
	case 's':
		return ("%s%s");
	case 'c':
		return ("%c%s");
	case '\0':
		return ("%p%s");
	default:

		return (NULL);
	}
}

/**
 * print_all - prints all the variadic args
 * @format: the formated string
 * Return: nothing (void)
 */
void print_all(const char *const format, ...)
{
	va_list l;
	char c, *s, *ss;
	int i;

	i = 0;
	if (format == NULL)
	{
		printf("\n");
		return;
	}

	va_start(l, format);
	while (format[i])
	{
		c = format[i];
		s = formating(c);
		switch (c)
		{
		case 'c':
			printf(s, va_arg(l, int), (format[i + 1]) ? ", " : "\n");
			break;
		case 'i':
			printf(s, va_arg(l, int), (format[i + 1]) ? ", " : "\n");
			break;
		case 'f':

			printf(s, va_arg(l, double), (format[i + 1]) ? ", " : "\n");
			break;
		case 's':
			ss = va_arg(l, char *);

			printf(ss != NULL ? s : formating('\0'), ss, (format[i + 1]) ? ", " : "\n");
			break;

		default:
			printf("\n");
			break;
		}
		i++;
	}
	va_end(l);
}
