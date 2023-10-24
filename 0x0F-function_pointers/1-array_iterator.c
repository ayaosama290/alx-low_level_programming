#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - a function that iterates
 * @array: the first parameter
 * @size: the second parameter
 * @action: the third parameter
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
