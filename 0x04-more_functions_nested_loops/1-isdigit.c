#include "main.h"
/**
 * _isdigit - checks numbers
 *
 * Description: a function that checks if a number is 0 - 9
 * @c: a parameter that holds the checked number
 *
 * Return: 1 if number 0 - 9 else return 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
