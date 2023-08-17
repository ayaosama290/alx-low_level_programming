#include "main.h"
/**
 * _isalpha - checks for alphabetic characters
 * Description: 'a function that checks for alphabetic characters'
 *
 * Return: 1 if c is a letter otherwise return 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else 
	{
		return (0);
	}
	return (0);
}
