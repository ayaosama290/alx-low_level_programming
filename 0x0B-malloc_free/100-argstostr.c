#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen -calculates length
 * Description: a function that calculates length of a string
 * @s: the first parameter
 * Return: length of string
 */
int _strlen(char *s)
{
	int size;

	for (size = 0; s[size] != '\0'; size++)
	{}
	return (size);
}
/**
 * argstostr - rewrites string
 * Description: function that concatenates arguments of your program.
 * @ac: the first parameter
 * @av: the second parameter
 * Return: m
 */
char *argstostr(int ac, char **av)
{
	int i = 0, nc = 0, j = 0, cmd = 0;
	char *m;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++, nc++)
	{
		nc = nc + _strlen(av[i]);
	}
	m = malloc(sizeof(char) * nc + 1);
	if (m == 0)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, cmd++)
		{
			m[cmd] = av[i][j];
		}
		m[cmd] = '\n';
		cmd++;
	}
	m[cmd] = '\0';
	return (m);
}
