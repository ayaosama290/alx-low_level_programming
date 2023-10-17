#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatinates strings
 * Description: a function that concatinats two strings together
 * @s1: the first parameter
 * @s2: the second parameter
 * @n: the third parameter
 * Return: str
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int i, t, l;
	unsigned int j;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);
	for (t = 0; s1[t] != '\0'; t++)
		;
	for (l = 0; s2[l] != '\0'; l++)
		;
	str = malloc(t + n + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < t; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < n; j++, i++)
	{
		str[i] = s2[j];
	}
	str[i] = '\0';
	return (str);
}
