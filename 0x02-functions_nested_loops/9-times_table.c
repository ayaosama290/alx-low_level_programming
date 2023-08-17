#include "main.h"
/**
 * times_table - prints a table
 *
 * Description: this is a function that prints the timetable of 9
 *
 */
void times_table(void)
{
	int i;
	int j;
	int z;

	for (i = 0; i < 10; i++)
	{
		_putchar(48);
		for (j = 1; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');
			z = i * j;
			if (z <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((z / 10) + 48);
				_putchar((z % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
