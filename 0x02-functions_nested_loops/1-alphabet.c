#include "main.h"
int _putchar(char c);
void print_alphabet(void)
{
	char first;
	char last = 'z';

	for (first = 'a'; first <= last; first++)
	{
		_putchar(first);
	}
	_putchar('\n');
}
