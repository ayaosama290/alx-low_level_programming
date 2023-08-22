#include "main.h"
/**
 * _strcpy - does something
 *
 * Description: a useless description for the function
 * @dest: the first parameter
 * @src: the second parameter
 *
 * Return: a character
 */
char *_strcpy(char *dest, char *src)
{
	int j = -1;

	do {
		i++;
		dest[j] = src[j];
	} while (src[j] != '\0');

	return (dest);
}
