/**
 * _pow_recursion - calculates the x power y
 * @x: int
 * @y: int
 * Return: int @x^@y or -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
