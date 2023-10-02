#include "main.h"
/**
 * _strlen_recursion - counts characters
 * Description: a function that returns the length of the string
 *
 * @s: a parameter
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i = i + _strlen_recursion(s + 1) + 1;
	}
	return (i);
}
