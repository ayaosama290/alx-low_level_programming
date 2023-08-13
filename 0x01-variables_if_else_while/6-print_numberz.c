#include <stdio.h>
#include <iostream>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar('0' + num);
	}
	putchar('\n');
	return (0);
}
