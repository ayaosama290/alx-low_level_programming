#include "main.h"
/**
 * _isupper - same as isupper()
 *
 * Description: this is a function that returns 1 if letter is capital
 * @c: a parameter that holds checked character
 *
 * Return: 1 if capital else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
