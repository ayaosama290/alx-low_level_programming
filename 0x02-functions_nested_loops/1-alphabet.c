#include "main.h"

/*
 * print_alphabet - printing alphabets
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
