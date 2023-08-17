#include "main.h"

/*
 * print_alphabet - a function that prints alphabets from
 * a to z
 *
 * Return: void
 */
void print_alphabet(void);

void print_alphabet(void)
{
	char cc;

	for (cc = 'a'; cc <= 'z'; cc++)
	{
		_putchar(cc);
	}
	_putchar('\n');
}
