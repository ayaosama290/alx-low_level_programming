#include "main.h"
/**
 * print_diagonal - prints diagonal shape
 *
 * Description: a function that prints a diagonal with n numbers
 * @n: the first parameter
 */
void print_diagonal(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (; i < n; i++)
	{
		int j;

		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
}
