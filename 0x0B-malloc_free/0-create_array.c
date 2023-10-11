#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create an array with malloc
 * Description: 'creating an array with malloc function'
 * @size: the first parameter
 * @c: the second parameter
 * Return: n
 */
char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (n == 0 || size == 0)
	{
		return (0);
	}
	while (size--)
	{
		n[size] = c;
	}
	return (n);
}
