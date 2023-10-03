#include "main.h"
/**
 * _islower - function that checks letters
 *
 * @c: parameter that has the checked letter
 * Description: 'a program that checks if a letter is capital'
 *
 * Return: 0 if the letter is capital otherwise return 1
 */
int _islower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c == 0)
	{
		return (0);
	}
	return (0);
}
