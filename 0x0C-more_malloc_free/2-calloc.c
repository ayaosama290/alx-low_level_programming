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
	char *m;
	size_t i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	m = malloc(size * nmemb);

	if (m == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		m[i] = 0;
	return (m);
}
