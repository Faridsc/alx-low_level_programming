#include <stddef.h>

/**
 * _strchr - searches for a char @c in a string @s
 * @s: the source string
 * @c: the char to search
 * Return: NULL if @c not found or (char *) to the first occurrence of @c
 */

char *_strchr(char *s, char c)
{
	char *ret;

	ret = NULL;
	while (*s != '\0')
	{
		if (*s == c)
		{
			ret = s;
			break;
		}
		s++;
	}
	return (ret);
}
