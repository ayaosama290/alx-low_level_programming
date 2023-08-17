#include "main.h"
/**
 * print_last_digit - return last digit
 *
 * Description: a function that returns the last digit of a number
 * @z: a parameter that holds the checked value
 *
 * Return: the value of the last digit
 */
int print_last_digit(int z)
{
	int i;

	for (i = 0; i < 2; i++)
	{
		if (z > 0)
		{
			return (z % 10);
		}
		else if (z < 0)
		{
			z = -z +(z * 2);
			return (z % 10);
		}
		else
		{
			return (0);
		}
	}
	i = 0;
	return (0);
}
