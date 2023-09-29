#include "main.h"
/**
 * _print_rev_recursion - prints in rev
 * Description: a function that prints the string in reverse
 * @s: a parameter
 * Return : void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
	{
		return;
	}
}
