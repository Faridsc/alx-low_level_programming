/**
 * _memset - fills the @s with @c
 * @s: char* a string to fill
 * @c: char to fill @s with
 * @n: the size of @s
 * Return: char* a pointer to @s
 */

char *_memset(char *s, char c, unsigned int n)
{
	char *t;

	t = s;
	while (t++)
		*t = c;

	return (s);
}