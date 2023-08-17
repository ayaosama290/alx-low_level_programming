#include "main.h"
/*
 *print_alphabet - printing alphabets
 *
 *Description: 'print alphabets from a to z'
 *Return: 1
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
