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
		for(j = 0; j < 10; j++)
		{
			z = i + i;
			_putchar(z + 48);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
