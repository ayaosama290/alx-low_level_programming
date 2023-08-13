#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	char ch = 'a';
	char end_alpha = 'z';

	while (ch <= end_alpha)
	{
		putchar(ch);
		ch++;
	}
	putchar	('\n');
	return (0);
}
