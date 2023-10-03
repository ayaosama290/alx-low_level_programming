#include "main.h"
/**
 * _strcmp - compares strings
 *
 * Description: a function that compares two strings and return int
 * @s1: the first parameter
 * @s2: the second parameter
 *
 * Return: an int
 */
int _strcmp(char *s1, char *s2)
{
	int e = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			e = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (e);
}
