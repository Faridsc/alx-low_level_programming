#include <math.h>
/**
 * _sqrt_recursion - calculates the sqrt of @n
 * @n: int to calculates its sqrt
 * Return: int the sqrt itself ;)
 */
int _sqrt_recursion(int n)
{
	int i;

	for (i = 0; i <= (n / 2 + (n % 2)); i++)
	{
		if (n == i * i)
			return (i);
	}
	return (-1);
}

