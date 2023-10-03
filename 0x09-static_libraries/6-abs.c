#include "main.h"
/**
 * _abs - checks numbers
 *
 * Description:a function that returns the absolute value
 * @a: a parameter that holds the checked value
 *
 * Return: a + value when + and a + value when -
 */
int _abs(int a)
{
	if (a < 0)
	{
		return (a + (-a * 2));
	}
	else if (a > 0)
	{
		return (a);
	}
	else
	{
		return (0);
	}
	return (0);
}
