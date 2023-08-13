#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	char ch = 'a';
	char end_ch = 'z';

	while (ch <= end_ch)
	{
		if (ch != 'q' || ch != 'e')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
