/**
 * root - claculates the root square with a recursion and a base num
 * a healp function for the _sqrt_recursion function
 * @n: the root to test if @n * @n is @b
 * @b: the base number
 * Return: int
 */
int root(int n, int b)
{
	/*
	 * when n bigger than the b number means that
	 * there is no natural square root
	 */
	if (n * n > b)
		return (-1);
	if (n * n == b)
		return (n);
	return (root(n + 1, b));
}

/**
 * _sqrt_recursion - calculates the sqrt of @n
 * @n: int to calculates its sqrt
 * Return: int the sqrt itself ;)
 */
int _sqrt_recursion(int n)
{
	/*
	 * return the root helping function results
	 * the @n argument of the root function starts with 1 value
	*/
	return (root(1, n));
}
