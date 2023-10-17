#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - checks malloc
 * Description: a function that allocates memory with malloc
 * @b: the first parameter
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *s;

	s = malloc(sizeof(s) * b);
	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
