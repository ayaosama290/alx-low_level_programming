#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - create an array of int
 * @min: the first parameter
 * @max: the second parameter
 * Return: an int
 */
int *array_range(int min, int max)
{
	int *m, i;
	int middle;

	if (min > max)
		return (NULL);
	middle = max - min + 1;
	m = malloc(sizeof(int) * middle);
	if (m == 0)
		return (NULL);
	for (i = 0; i < middle; i++)
	{
		m[i] = min++;
	}
	return (m);
}
