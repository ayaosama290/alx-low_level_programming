#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	char ch_small = "a";
	char end_small = "z";
	char ch_large = "A";
	char end_large = "Z";

	while (ch_small <= end_small)
	{
		purchar(ch_small);
		ch_small++;
	}
	while (ch_large <= end_large)
	{
		purchar(ch_large);
		ch_large++;
	}
	putchar('\n');
	return (0);
}
