#include <stdlib.h>

/**
 * create_array - create an array of size @size
 * @size: the array size
 * @c: fill it with this char
 * Return: char* or null
 */

char *create_array(unsigned int size, char c)
{
	if (!size)
		return (NULL);
	return ((char *)malloc(sizeof(char) * size + 1));
}
