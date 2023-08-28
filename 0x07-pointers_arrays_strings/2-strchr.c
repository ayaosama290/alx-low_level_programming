#include "main.h"
/**
 * _strchr - fill memory
 * @s: the first parameter
 * @c: the second parameter
 * Return: a character
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
