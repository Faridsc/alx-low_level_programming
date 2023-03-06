/**
 * _memset - fills the first @n bytes of the memory area pointed
 * to @s with the constant byte @b
 * @s: the pointer to the start of the string
 * @b: the char to fill with
 * @n: the number of char to replace
 * Return: a pointer to the start char @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ret = s;

	for (; n > 0; n--, s++)
		*s = b;
	return (ret);
}
