#include "main.h"
/**
 * print_triangle - prints a triangle
 *
 * Description: prints two triangles one invisible and one visible
 * @size: first parameter
 */
void print_triangle(int size)
{
	int height, base;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (height = 1; height <= size; height++)
		{
			for (base = 1; base <= size; base++)
			{
				if ((height + base) <= size)
					_putchar(' ');
				else
					_putchar(35);
			}
			_putchar('\n');
		}
	}
}
