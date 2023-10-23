#include <unistd.h>
#include "main.h"
/**
 * _putchar - print characters out
 *@c: The character to print
 * Return: 1
 */
int _putchar (char c)
{
	return (write(1, &c, 1));
}
