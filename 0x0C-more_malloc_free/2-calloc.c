#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _memset - memset function
 * @s: the first parameter
 * @b: the second parameter
 * @n: the third parameter
 * Return: a character
 */
char *_memset(char *s, char b, unsigned int n)
{
    char *ptr = s;
    
    while (n--)
        *s++ = b;
    return (ptr);
}
/**
 * _calloc - calloc function
 * @nmemb: the first parameter
 * @size: the second parameter
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
		return (NULL);
	_memset(m, 0, sizeof(int) * nmemb);

	return (m);
}
