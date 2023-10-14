#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - return a copy to a string
 * Description: a function that returns a pointer to a copy of the original str
 * @str: the first parameter
 * Return: a pointer to a string
 */
char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *m;

	if (str == NULL)
	{
		return (NULL);
	}
	for (; str[size] != '\0'; size++)
	{
	}
	m = malloc(size * sizeof(*str) + 1);

	if (m == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < size; i++)
		{
			m[i] = str[i];
		}

	}
	return (m);
}

