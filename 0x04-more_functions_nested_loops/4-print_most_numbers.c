#include "main.h"
/**
 * print_most_numbers - prints most numbers
 *
 * Description: a function that prints numbers 0-9 excluding 2 and 4
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n == 2 || n == 4)
		{
			continue;
		}
		else
		{
			_putchar(n + 48);
		}
	}
	_putchar('\n');

}
