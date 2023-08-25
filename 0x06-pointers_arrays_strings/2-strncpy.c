#include "main.h"
/**
 * _strncpy - copies strings
 *
 * Description: a function that copies strings djkfhkfh  khdkfsh
 * @dest: the first parameter
 * @src: the second parameter
 * @n: the third parameter
 *
 * Return: a character
 */
char *_strncpy(char *dest, char *src, int n)
{
	int ii;

	for (ii = 0; ii < n && src[ii] != '\0'; ii++)
	{
		dest[ii] = src[ii];
	}
	while (ii < n)
	{
		dest[ii] = '\0';
		ii++;
	}
	return (dest);
}
