#include "main.h"

/*
 * print_alphabet - printing alphabets
 *
 * Description: 'this function prints alphabets from a to z'
 * Return: void
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
