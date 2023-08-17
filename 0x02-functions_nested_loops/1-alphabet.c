#include "main.h"
/*
 * print_alphabet - printing alphabets 
 *
 * Description: 'this is a function that prints the alphabets froma t * o z'
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
