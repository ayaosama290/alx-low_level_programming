#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - index of first match element
 * @array: the first parameter
 * @size: the second parameter
 * @cmp: the third parameter
 * Return: an int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (0);
}
