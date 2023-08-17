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
		for (n; n <= 98; n++)
		{
			return (n);
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n > 98)
	{
		for (n; n >= 98; n--)
		{
			return (n);
			_putchar(',');
			_putchar(' ');
		}
	}
	return (0);
}
