#include "main.h"
/**
 * _puts - prints character
 *
 * Description: a function that prints characters to stdout
 *
 * @str: the first parameter
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
