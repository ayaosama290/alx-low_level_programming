#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	char ch_end = 'z';
	char ch_start = 'a';

	while (ch_end >= ch_start)
	{
		putchar(ch_end);
		ch_end--;
	}
	putchar('\n');
	return (0);
}
