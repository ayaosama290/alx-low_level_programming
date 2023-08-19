#include "main.h"
/**
 * print_number - prints a number
 *
 * Description: a function that prints numbers to the screen
 * @n: the first parameter
 */
void print_number(int n)
{
	unsigned int number = n;

	if (n < 0)
	{
		_putchar('-');
		number = -number;
	}
	if ((number / 10) > 0)
		print_number(number / 10);
	_putchar((number % 10) + 48);
}
