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
	int last_digit;

	if (z < 0)
	{
		last_digit = -1 *(z % 10);
	}
	else
	{
		last_digit = z % 10;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
