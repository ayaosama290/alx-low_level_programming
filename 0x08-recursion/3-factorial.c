#include "main.h"
/**
 * factorial - factorials a num
 * Description: a function that returns the factorial of a given number
 * @n: a parameter
 * Return: the factorial of a number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
