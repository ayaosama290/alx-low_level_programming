#include "main.h"
/**
 * _strcat - a string func
 *
 * Description: a function that does something to the string
 * @dest: the first parameter
 * @src: the second parameter
 *
 * Return: pointer to the dest
 */
char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	while (dest[c])
	{
		c++;
	}
	for (c2 = 0; src[c2]; c2++)
	{
		dest[c++] = src[c2];
	}
	return (dest);
}
