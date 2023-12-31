#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: the first parameter
 * @f: the second parameter
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		f(name);
	}
}
