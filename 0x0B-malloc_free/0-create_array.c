#include <stdlib.h>

/**
 * create_array - create an array of size @size
 * @size: the array size
 * @c: fill it with this char
 * Return: char* or null
 */

char *create_array(unsigned int size, char c)
{
	char *ret;

	if (!size)
		return (NULL);

	ret = (char *)malloc(sizeof(char) * (size + 1));

	if (ret != NULL)
	{
		ret[size] = '\0';
		size--;
		while (size)
		{
			ret[size] = c;
			--size;
		}
	}
	return (ret);
}
