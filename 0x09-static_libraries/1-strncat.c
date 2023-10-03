#include "main.h"
/**
 * _strncat - concatenates
 *
 * Description: a function that concatinates strings together
 * @dest: the first parameter
 * @src: the second parameter
 * @n: the third parameter
 *
 * Return: a character
 */
char *_strncat(char *dest, char *src, int n)
{
	int cat, i;

	cat = 0;
	while (dest[cat])
	{
		cat++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[cat + i] = src[i];
	}
	dest[cat + i] = '\0';
	return (dest);
}
