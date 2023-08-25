#include "main.h"
/**
 * print_number - prints integer
 *
 * Description: a function that prints an integer dfjklsdk
 * @n: the first parameter
 */
void print_number(int n)
{
	unsigned int n1;

	n1 = n;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}
