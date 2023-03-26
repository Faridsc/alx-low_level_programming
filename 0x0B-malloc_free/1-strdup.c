#include <stdlib.h>
/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 * Return: a char* to the duplicated string
 *
 */
char *_strdup(char *str)
{
	char *s;
	char *dup;
	int len, i;

	if (str == NULL)
		return (NULL);

	s = str;
	len = 0;
	/*
	 * this calculate the string length
	 */
	while (*s != '\0')
	{
		len++;
		s++;
	}
	dup = (char *)malloc((len + 1) * sizeof(char));
	for (i = 0; i < len + 2; i++)
		dup[i] = str[i];
	return (dup);
}
