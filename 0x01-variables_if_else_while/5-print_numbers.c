#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: 0
 */
int main(void)
{
	char num = 0;
	while (num < 10)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
