#include "main.h"

/*
 * print_alphabet - printing alphabets from a to z
 *
 */
void print_alphabet(void)
{
	char cc;

	for (cc = 'a'; cc <= 'z'; cc++)
	{
		_putchar(cc);
	}
	_putchar('\n');
}
