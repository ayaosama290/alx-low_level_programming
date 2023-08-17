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
			_putchar((n / 10) + 48);
			_putchar((n % 10) + 48);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			_putchar((n / 100) +48);
			_putchar((n / 10) + 48);
			_putchar((n % 10) + 48);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
	else 
	{

		_putchar(9 + '0');
		_putchar(8 + '0');
		_putchar('\n');
	}
}
