#include "main.h"
/**
 * print_square - prints squares
 *
 * Description: a function that prints squares of n size
 * @size: the first parameter
 */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
