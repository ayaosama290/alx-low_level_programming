#include "main.h"
/**
 * _strstr - entry point
 * @haystack: the first parameter
 * @needle: the second parameter
 * Return: a character
 */
char *_strstr(char *haystack, char *needle)
{
	for(; *haystack != '\0'; haystack++)
	{
		char *m = haystack;
		char *p = needle;

		while (*m == *p && +p != '\0')
		{
			m++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
