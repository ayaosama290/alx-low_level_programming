#include "main.h"
/**
 * print_sign - checks numbers
 *
 * Description: afunction that checks if a  number is big or not
 * @n : a paramater that has the cheked value
 *
 * Return: 1 if n is big or return 0 if n is 0 else return -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
