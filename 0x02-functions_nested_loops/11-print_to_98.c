#include "main.h"
/**
 * print_to_98 -
 *
 * Description:
 * @n:
 *
 */
void print_to_98(int n)
{
	if (n < 98) 
	{
		for (; n <= 98; n++)
		{
			_putchar(n + 48);
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			_putchar(n + 48);
			_putchar(',');
			_putchar(' ');
		}
	}
	else 
	{
		_putchar(n + 48);
	}
}
