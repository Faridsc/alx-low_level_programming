#include <stdio.h>
/**
 * array_iterator - iterates over an array
 * @array: the array itself
 * @size: the size of the array @array
 * @action: a pointer to a function to handle @array elements
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
