#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - checks malloc
 * Description: a function that allocates memory with malloc
 * @b: the first parameter
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *s = malloc(b);

	if (s == 0)
	{
		exit(98);
	}
	return (s);
}
