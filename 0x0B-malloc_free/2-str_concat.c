#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - a function that concates strings
 * Description: a function that concates strings and returns concatanation
 * @s1: the first parameter
 * @s2: the second parameter
 * Return: a pointer to a string
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0;
	int i = 0;
	char *m;

	if (s1 == NULL)
	{
		s1 = "\0";
	}
	if (s2 == NULL)
	{
		s2 = "\0";
	}
	for (; s1[size1] != '\0'; size1++)
	{}
	for (; s2[size2] != '\0'; size2++)
	{}
	m = malloc((size1 + size2) * sizeof(char) + 1);
	if (m == 0)
		return (0);
	for (; i <= size1 + size2; i++)
	{
		if (i < size1)
			m[i] = s1[i];
		else
			m[i] = s2[i - size1];
	}
	m[i] = '\0';
	return (m);
}
