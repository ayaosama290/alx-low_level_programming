#include "main.h"
/**
 * _memcpy - copy memory
 * @dest: the first parameter
 * @src: the second parameter
 * @n: the third parameter
 * Return: a character
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
