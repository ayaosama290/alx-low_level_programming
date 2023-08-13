#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int num = 0;
	char ch = 'a';
	char ch_end = 'f';

	while (num < 10)
	{
		putchar('0' + num);
		num++;
	}
	while (ch <= ch_end)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
