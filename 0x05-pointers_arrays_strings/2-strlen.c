#include "main.h"
/**
 * _strlen - string length
 *
 * Description: a function that counts the string length
 * @s: the first parameter
 *
 * Return: 0 succeed
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0' ; s++)
	{ 
		++i;
	}
	return (i);
}
