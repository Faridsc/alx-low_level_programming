/**
 * factorial - calculate the factorial of @n
 * @n: int to calculate its factorial
 * Return: int the factorial
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
