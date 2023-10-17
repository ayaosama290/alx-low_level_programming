#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - calloc function
 * @nmemb: the first parameter
 * @size: the second parameter
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *m = calloc(nmemb, size);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (m == NULL)
		return (NULL);
	return (m);
}
