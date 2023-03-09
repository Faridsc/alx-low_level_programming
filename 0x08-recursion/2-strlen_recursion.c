/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to calculate its length
 * Return: int the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (_strlen_recursion(s + 1) + 1);

	return (0);
}
