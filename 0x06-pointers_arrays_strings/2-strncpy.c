#include <stddef.h>
/**
 * _strncpy - copy the @src to dest with @n chars
 * @dest: char * the dest string
 * @src: char * the source string
 * @n: the number of chars to copy
 * Return: the dest pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	if (src == NULL)
		return (NULL);
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';

	return (dest);
}
