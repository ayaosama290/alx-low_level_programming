#include "main.h"
/**
 * print_last_digit - return last digit
 *
 * Description: a function that returns the last digit of a number
 * @z: a parameter that holds the checked value
 *
 * Return: the value of the last digit
 */
int _abs(int a);
int print_last_digit(int z)
{
	int i;

	for (i =0; i < 2; i++)
	{
		if (z > 0)
		{
		return (z % 10);
		}
		else if (z < 0)
		{
			z = _abs(z);
			return (z % 10);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
