#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: 0
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%u", num);
		num++;
	}
	putchar('\n');
	return (0);
}
