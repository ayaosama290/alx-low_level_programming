#include "main.h"
/**
 * print_line - prints a st.line
 *
 * Description: a function that prints st.lines according to n
 * @n: the first parameter
 */
void print_line(int n)
{
	for (; n > 0; n--)
	{
		_putchar(95);
	}
	_putchar('\n');
}
