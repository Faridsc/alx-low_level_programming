#include <stdlib.h>

/**
 * int_index - searching the index
 * @array: are array of int where to search
 * @size: the size of the array
 * @cmp: a pointer to a function to compare elements
 * Return: the element index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp != NULL)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}