#include "main.h"
#include <stdio.h>
/**
 * fizz_bizz - fizz buzz
 *
 * Description: a function that prints fizz,buzz,fizzBuzz,numbers.
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			if (i >= 0 && i <= 9)
			{
				putchar(i + 48);
			}
			else
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
			}
		}
		putchar(' ');
	}
	_putchar('\n');
}

