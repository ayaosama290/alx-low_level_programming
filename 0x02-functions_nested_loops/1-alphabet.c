#include "main.h"

void print_alphabet(void);

int main(void)
{
	void print_alphabet(void)
	{
		char first;
		char last = 'z';

		for (first = 'a';first <= last; first++)
		{
			_putchar(first + '0');
		}
		_putchar('\n');
	}
	return (0);
}
