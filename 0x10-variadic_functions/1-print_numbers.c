#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - print numbers
 * @separator: the first parameter
 * @n: the second parameter
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start(ap, n);

	while (separator && i < n)
	{
		if (i < n - 1)
		{
			printf("%d%s", va_arg(ap, int), separator);
			i++;
		}
		else if (i == n - 1)
		{
			printf("%d", va_arg(ap, int));
			i++;
		}
	}
	va_end(ap);
	printf("\n");
}
