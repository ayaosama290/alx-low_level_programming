#include "main.h"
/**
 * jack_bauer - prints the 24 hours
 *
 * Description: a function that prints the time from 0 to 24 hrs
 *
 * Return: 0 if there are no errors
 */
void jack_bauer(void)
{
	int hours;
	int min;

	for (hours = 0; hours < 24; hours++ )
	{
		for(min = 0; min < 60 ;min++)
		{
			_putchar((hours / 10) + 48);
			_putchar((hours % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');
		}
	}
}
