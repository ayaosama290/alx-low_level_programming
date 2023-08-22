#include "main.h"
/**
 * print_rev - prints reversed
 *
 * Description: a function that prints something reversed
 * @s: the first parameter
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
