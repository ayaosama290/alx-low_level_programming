#include "main.h"
/**
 * _memset - file memory
 *
 * Description: a function that does something with file memory
 * @s: the first parameter
 * @b: the second parameter
 * @n: the third parameter
 * Return: a character
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; n > 0; itr++, n--)
	{
		a[itr] = b;
	}
	return (s);
}
