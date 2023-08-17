#include "main.h"

/*
 * print_alphabet - uses the _putchar function to print the alphabets * from a to z
 *
 * Return: void
 */
void print_alphabet(void);
int _putchar(char c);

void print_alphabet(void)
{
	char cc;

	for (cc = 'a'; cc <= 'z'; cc++)
	{
		_putchar(cc);
	}
	_putchar('\n');
}
