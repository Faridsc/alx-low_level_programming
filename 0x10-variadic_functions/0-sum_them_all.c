#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all the args after @n
 * @n: the number of variadic args
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int o, s;

	s = 0;
	if (n == 0)
		return (0);
	s = 0;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		o = va_arg(ap, int);
		s += o;
	}
	va_end(ap);
	return (s);
}
