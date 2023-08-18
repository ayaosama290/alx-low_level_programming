#include "main.h"
/**
 * print_to_98 - prints numbers till 98
 *
 * Description: 'this is a function that takes a no and count till
 * 98'
 * @n: the parameter that holds the starting number
 *
 */
void print_to_98(int n)
{
	int c;

	if (n > 98)
	{
		for (c = n; c > 98; c--)
		{
			printf("%d, ", c);
		}
	}
	else
	{
		for (c = n; c < 98; c++)
		{
			printf("%d, ", c);
		}
		printf("98\n");
	}
}
