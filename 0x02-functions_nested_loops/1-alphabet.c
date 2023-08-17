#include "main.h"

int _putchar(char c);
void print_alphabet(void);

void print_alphabet(void)
{
	int first;
	int last = 'z';

	for (first = 'a'; first <= last; first++)
	{
		_putchar(first);
	}
	_putchar('\n');
}
