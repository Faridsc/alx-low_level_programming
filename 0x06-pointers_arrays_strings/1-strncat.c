/**
 * _strncat - concatinate the @n chars at most from @src to the @dest
 * @dest: char * the destination char *
 * @src: the source char *
 * @n: the number of chars to add
 * Return: char * the destination pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ret = dest;
	int i;

	i = 0;
	while (*dest != '\0')
		dest++;
	while (*src != '\0' && i < n)
	{
		*(dest++) = *(src++);
		i++;
	}
	if (*dest != '\0')
	{
		dest++;
		*dest = '\0';
	}
	return (ret);
}
