#include "main.h"

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	char first;
	char last = 'z';

	for (first = 'a'; first <= last; first++)
	{
		_put char(first + '0');
	}
	_putchar()'\n';
}
