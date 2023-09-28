#include "main.h"

/**
 * _puts_recursion - prints as puts
 * Description: a function that prints a series of characters
 * @s: a parameter
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
