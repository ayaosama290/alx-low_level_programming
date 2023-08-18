#include "main.h"
/**
 *print_times_table -
 *
 * Description:
 * @n: a parameter that holds the checked number
 */
void print_times_table(int n)
{
	if (n < 15 || n > 0)
	{
		int rows;
		int col;

		for (rows = 0; rows < n; rows++)
		{
			for (col = 0; col < n; col++)
			{
				_putchar(rows * col);
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
