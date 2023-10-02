#include "main.h"
int square(int n, int i);
/**
 * _sqrt_recursion - square root
 * Description: a function that returns the square root of a number
 * @n: a parameter
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * square - a help function
 * Description: this function was made to help the _sqrt_recursion function
 * @n: the first parameter
 * @i: the second parameter
 * Return: the square root
 */
int square(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i < n)
	{
		return (square(n, i + 1));
	}
	else
	{
		return (-1);
	}
	if (n < 0)
	{
		return (-1);
	}
}
