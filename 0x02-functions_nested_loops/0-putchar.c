#include "main.h"
/**
 * main - Entry point
 *
 * @c: prints the output
 * Return: 0
 */
int _putchar(char c);

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
	{
		_putchar(str[ch]);
	}
	_putchar('\n');
	return (0);
}
